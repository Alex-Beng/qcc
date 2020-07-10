#include "debug.h"
#include "IRListener.h"

#include <antlr4-runtime/antlr4-runtime.h>

#include "generated/C0Lexer.h"
#include "generated/C0Parser.h"
#include "generated/C0BaseListener.h"



void IRListener::enterFunctionDefinition(C0Parser::FunctionDefinitionContext* ctx) {
#ifdef DEBUG
    printf("entering func %s \n", ctx->name->getText().c_str());
#endif 
    // get func name
    std::string func_name =  ctx->name->getText();
    
    // check return type
    std::string rt_type = ctx->ret->getText();
    int rt_type_int;
    if (rt_type == "const int" || rt_type == "const char") {
        throw std::runtime_error("unsupport function-return type const xxx");
    }

    if (rt_type == "int") {
        rt_type_int = CLS_INT;
    }
    else if (rt_type == "char") {
        rt_type_int = CLS_CHAR;
    }
    else if (rt_type == "void") {
        rt_type_int = CLS_VOID;
    }
    
    // get param num
    int param_nums = ctx->parameter().size();

    // -----sym table and ir------
    
    // add func to sym table
    if (sym_table.lookup(curr_func, func_name, true) == nullptr) {
        sym_table.addSym(curr_func, func_name, rt_type_int, TYPE_FUNC, param_nums, ctx->getStart()->getLine());
    }

    this->curr_func = func_name;
    in_func = true;
    ir.addIMC(func_name, OP::FUNC_BEGIN, "0", "0");
    
    // add param to sym table
    int t_cnt = 0; // param cnt
    for (auto& param : ctx->parameter()) {
        std::string param_type = param->typeType()->getText();
        std::string param_name = param->Identifier()->getText();
        
        int param_cls;
        if (param_type == "char") {
            param_cls = CLS_CHAR;
        }
        else if (param_type == "int") {
            param_cls = CLS_INT;
        }
        else {
            throw std::runtime_error("invalid type at line "+std::to_string(ctx->getStart()->getLine()));
        }

        if (sym_table.lookup(func_name, param_name, true) == nullptr) {
            sym_table.addSym(func_name, param_name, param_cls, TYPE_PARAM, t_cnt, param->getStart()->getLine());
        }
        else {
            throw std::runtime_error("multi defination of param "+param_name+" at line: "+std::to_string(param->getStart()->getLine()));
        }
        t_cnt++;
    }

}
void IRListener::exitFunctionDefinition(C0Parser::FunctionDefinitionContext* ctx) {
#ifdef DEBUG
    printf("leaving func %s \n", this->curr_func.c_str());
#endif
    ir.addIMC("0", OP::FUNC_END, "0", "0");
    this->curr_func = "";
    in_func = false;
}


void IRListener::enterDefConst(C0Parser::DefConstContext * ctx) {
    std::string var_name = ctx->Identifier()->getText();
    std::string type_str = ctx->typeType()->getText();
    int var_cls;
    int var_type = TYPE_CONST;
    int var_val;
    if (type_str == "const int") {
        var_cls = CLS_INT;
    }
    else if (type_str == "const char") {
        var_cls = CLS_CHAR;
    }
    else if (type_str == "void") {
        throw std::runtime_error("unexpect void type at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    else { //  "xxx"
        throw std::runtime_error("unexpect LHS expression at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    // get rhs
    if (ctx->rhs->getType() == C0Lexer::DecimalInteger) {
        var_val = std::stoi(ctx->DecimalInteger()->getText());
    }
    else if(ctx->rhs->getType() == C0Lexer::CharLiteral) {
        var_val = ctx->CharLiteral()->getText()[1];
    }

    if (sym_table.lookup(curr_func, var_name, true) == nullptr)
        sym_table.addSym(curr_func, var_name, var_cls, var_type, var_val, ctx->getStart()->getLine());
    else {
        throw std::runtime_error("multi defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }
}

void IRListener::enterDefVar(C0Parser::DefVarContext * ctx) {
    std::string var_name = ctx->Identifier()->getText();
    std::string type_str = ctx->typeType()->getText();
    int var_cls;
    int var_type = TYPE_VAR;

    if (type_str == "int") {
        var_cls = CLS_INT;
    }
    else if (type_str == "char") {
        var_cls = CLS_CHAR;
    }
    else if (type_str == "void") {
        throw std::runtime_error("unexpect void type at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    else { // "const xxx"
        throw std::runtime_error("const must have RHS expression at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    if (sym_table.lookup(curr_func, var_name, true) == nullptr)
        sym_table.addSym(curr_func, var_name, var_cls, var_type, 0, ctx->getStart()->getLine());
    else {
        throw std::runtime_error("multi defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }

}

void IRListener::enterDefArray(C0Parser::DefArrayContext * ctx) {
    std::string var_name = ctx->Identifier()->getText();
    std::string type_str = ctx->typeType()->getText();

    int var_cls;
    int var_type = TYPE_ARRAY;
    int array_len;

    if (type_str == "int") {
        var_cls = CLS_INT;
    }
    else if (type_str == "char") {
        var_cls = CLS_CHAR;
    }
    else if (type_str == "void") {
        throw std::runtime_error("unexpect void type at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    else { // "const xxx"
        throw std::runtime_error("unsupport type const xxx[] at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    array_len = std::stoi(ctx->DecimalInteger()->getText());
    
    if (array_len <= 0) {
        throw std::runtime_error("unexpect array len <=0 at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    if (sym_table.lookup(curr_func, var_name, true) == nullptr)
        sym_table.addSym(curr_func, var_name, var_cls, var_type, array_len, ctx->getStart()->getLine());
    else {
        throw std::runtime_error("multi defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }

}

void IRListener::exitAssignExpr(C0Parser::AssignExprContext * ctx) {
    // check lhs (must be iden/array)
    auto lhs = temp_var.get(ctx->expression()[0]);
    auto lhs_varinfo = sym_table.lookup(curr_func, lhs, false);
    if (lhs_varinfo && 
    (lhs_varinfo->type == TYPE_ARRAY || lhs_varinfo->type == TYPE_VAR || lhs_varinfo->type == TYPE_PARAM)) {
        ;
    }
    else {
        throw std::runtime_error("lhs must have been defined or a variable at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    
    auto rhs = temp_var.get(ctx->expression()[1]);
    auto rhs_varinfo = sym_table.lookup(curr_func, rhs, false);
    
    if (rhs_varinfo && 
    (rhs_varinfo->type == TYPE_ARRAY || rhs_varinfo->type == TYPE_VAR || rhs_varinfo->type == TYPE_PARAM)) {
        if (rhs_varinfo->type == TYPE_ARRAY) {
            auto t_v = ir.gen_temp(curr_func, ctx->getStop()->getLine(), rhs_varinfo->cls, sym_table);
            auto t_idx = temp_idx.get(ctx->expression()[1]);
            ir.addIMC(t_v, OP::READ_ARR, rhs, t_idx);
            rhs = t_v;
        }
    }
    else if (rhs_varinfo==NULL) { // 字面量
        ;
    }
    else {
        throw std::runtime_error("rhs must have been defined or a variable at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    // assign -> rhs = lhs+0
    if (lhs_varinfo->type == TYPE_ARRAY) {
        auto lhs_idx = temp_idx.get(ctx->expression()[0]);
        ir.addIMC(lhs, OP::SAVE_ARR, lhs_idx, rhs);
    }
    else {
        ir.addIMC(lhs, OP::ADD, "0", rhs);
    }
}

void IRListener::exitPrimaryExpr(C0Parser::PrimaryExprContext * ctx) {
    auto child_type = temp_cls.get(ctx->children[0]);
    auto child_var = temp_var.get(ctx->children[0]);

    temp_cls.put(ctx, child_type);
    temp_var.put(ctx, child_var);
}

void IRListener::exitLiteralExpr(C0Parser::LiteralExprContext * ctx) {
    if (ctx->lite->getType() == C0Lexer::DecimalInteger) {
        temp_cls.put(ctx, CLS_INT);
        temp_var.put(ctx, ctx->DecimalInteger()->getText());
    }
    else if (ctx->lite->getType() == C0Lexer::CharLiteral) {
        int var_val = ctx->CharLiteral()->getText()[1];

        temp_cls.put(ctx, CLS_CHAR);
        temp_var.put(ctx, std::to_string(var_val));
    }
    else if (ctx->lite->getType() == C0Lexer::StringLiteral){
        // add to sym table
        std::string ts = ctx->StringLiteral()->getText();
        int str_idx = sym_table.addStr(ts);

        temp_cls.put(ctx, CLS_STR);
        temp_var.put(ctx, std::to_string(str_idx));
    }
}

void IRListener::exitVariableExpr(C0Parser::VariableExprContext * ctx) {
    std::string var_name = ctx->Identifier()->getText();
    
    auto t_varinfo = sym_table.lookup(curr_func, var_name, false);
    if (t_varinfo == nullptr) {
        throw std::runtime_error("can't find defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }
        
    temp_cls.put(ctx, t_varinfo->cls);
    temp_var.put(ctx, t_varinfo->name);
}

void IRListener::exitBinaryExpr(C0Parser::BinaryExprContext * ctx) {
    // check lhs (must be iden)
    auto lhs = temp_var.get(ctx->expression()[0]);
    auto lhs_varinfo = sym_table.lookup(curr_func, lhs, false);

    auto rhs = temp_var.get(ctx->expression()[1]);
    auto rhs_varinfo = sym_table.lookup(curr_func, rhs, false);

    // std::cout<<lhs<<' '<<rhs<<'\n';

    if (lhs_varinfo && lhs_varinfo->type == TYPE_ARRAY) {
        auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);
        auto t_idx = temp_idx.get(ctx->expression()[0]);
        ir.addIMC(t_v, OP::READ_ARR, lhs, t_idx);
        lhs = t_v;
    }
    if (rhs_varinfo && rhs_varinfo->type == TYPE_ARRAY) {
        auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);
        auto t_idx = temp_idx.get(ctx->expression()[1]);
        ir.addIMC(t_v, OP::READ_ARR, rhs, t_idx);
        rhs = t_v;
    }

    if (lhs_varinfo == NULL && rhs_varinfo == NULL) {// $$两个都是字面量，直接计算
        ;
    }

    int cls = CLS_INT;
    auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), cls, sym_table);

    
    auto op = ctx->op->getText();

    if (    op == "*"
        ||  op == "/"
        ||  op == "+"
        ||  op == "-") {

        temp_var.put(ctx, t_v);
        ir.addIMC(t_v, op, lhs, rhs);
    }
    else {// $$需要label跳转
        auto iflabs = if_labels.get(ctx->parent->parent);
        auto whlabs = while_labels.get(ctx->parent->parent);
        auto forlabs = for_labels.get(ctx->parent->parent);

        if (iflabs.size()) { // 说明是在if condition里
            if (op == "==") {
                ir.addIMC(iflabs[0], OP::NEQ, lhs, rhs);
            }
            else if (op == "!=") {
                ir.addIMC(iflabs[0], OP::EQU, lhs, rhs);
            }
            else if (op == "<=") {
                ir.addIMC(iflabs[0], OP::GRT, lhs, rhs);
            }
            else if (op == "<") {
                ir.addIMC(iflabs[0], OP::GREQ, lhs, rhs);
            }
            else if (op == ">=") {
                ir.addIMC(iflabs[0], OP::LES, lhs, rhs);
            }
            else if (op == ">") {
                ir.addIMC(iflabs[0], OP::LESEQ, lhs, rhs);
            }
        }

        if (whlabs.size()) { // 在while condition里
            if (op == "==") {
                ir.addIMC(whlabs[1], OP::NEQ, lhs, rhs);
            }
            else if (op == "!=") {
                ir.addIMC(whlabs[1], OP::EQU, lhs, rhs);
            }
            else if (op == "<=") {
                ir.addIMC(whlabs[1], OP::GRT, lhs, rhs);
            }
            else if (op == "<") {
                ir.addIMC(whlabs[1], OP::GREQ, lhs, rhs);
            }
            else if (op == ">=") {
                ir.addIMC(whlabs[1], OP::LES, lhs, rhs);
            }
            else if (op == ">") {
                ir.addIMC(whlabs[1], OP::LESEQ, lhs, rhs);
            }

        }

        if (forlabs.size()) { // for condition里
            if (op == "==") {
                ir.addIMC(forlabs[1], OP::NEQ, lhs, rhs);
            }
            else if (op == "!=") {
                ir.addIMC(forlabs[1], OP::EQU, lhs, rhs);
            }
            else if (op == "<=") {
                ir.addIMC(forlabs[1], OP::GRT, lhs, rhs);
            }
            else if (op == "<") {
                ir.addIMC(forlabs[1], OP::GREQ, lhs, rhs);
            }
            else if (op == ">=") {
                ir.addIMC(forlabs[1], OP::LES, lhs, rhs);
            }
            else if (op == ">") {
                ir.addIMC(forlabs[1], OP::LESEQ, lhs, rhs);
            }

        }
    }

}

void IRListener::exitPrefixExpr(C0Parser::PrefixExprContext * ctx) {
    auto object_cls = temp_cls.get(ctx->expression());
    auto object = temp_var.get(ctx->expression());
    auto t_varinfo = sym_table.lookup(curr_func, object, false);
    auto op = ctx->op->getText();

    // 前缀操作后必然是int
    temp_cls.put(ctx, CLS_INT);
    
    if (t_varinfo == NULL) { // 可能为字面量，字面量不在符号表
        printf(object.c_str());
        if (op == "+") {
            
            temp_var.put(ctx, object);
        }
        else if (op == "-") {
            auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), object_cls, sym_table);
            ir.addIMC(t_v, OP::SUB, "0", object);

            temp_var.put(ctx, t_v);
        }
    }
    else {   
        if (t_varinfo->type == TYPE_ARRAY) {
            auto t_idx = temp_idx.get(ctx->expression());
            auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);

            ir.addIMC(t_v, OP::READ_ARR, t_varinfo->name, t_idx);
            object = t_v;
        }

        if (op == "+") {
            temp_var.put(ctx, object);
        }
        else if (op == "-") {
            ir.addIMC(object, OP::SUB, "0", object);

            temp_var.put(ctx, object);
        }
    }
}

void IRListener::exitSubExpr(C0Parser::SubExprContext * ctx) {
    auto t_type = temp_cls.get(ctx->expression());
    auto t_var = temp_var.get(ctx->expression());
    auto t_idx = temp_idx.get(ctx->expression());

    temp_cls.put(ctx, t_type);
    temp_var.put(ctx, t_var);
    temp_idx.put(ctx, t_idx);
}

void IRListener::exitArefExpr(C0Parser::ArefExprContext * ctx) {
    std::string array_name = ctx->expression()[0]->getText();

    auto t_varinfo = sym_table.lookup(curr_func, array_name, false);
    if (t_varinfo->type != TYPE_ARRAY) {
        throw std::runtime_error("expect array type at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    auto array_idx = temp_var.get(ctx->expression()[1]);

    auto tt_varinfo = sym_table.lookup(curr_func, array_idx, false);
    // 如果遇到嵌套，先求值
    if (tt_varinfo && tt_varinfo->type == TYPE_ARRAY) {
        auto t_idx = temp_idx.get(ctx->expression()[1]);
        auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);
        ir.addIMC(t_v, OP::READ_ARR, array_idx, t_idx);
        array_idx = t_v;
    }    

    temp_cls.put(ctx, t_varinfo->cls);
    temp_var.put(ctx, array_name);
    temp_idx.put(ctx, array_idx);
}

void IRListener::enterIfStmt(C0Parser::IfStmtContext * ctx) {
    auto label1 = ir.gen_label();

    bool has_else = (ctx->elseStatement() != NULL);
    std::vector<std::string> t_labels = {label1};

    if (has_else){
        auto label2 = ir.gen_label();
        t_labels.push_back(label2);
    }

    if_labels.put(ctx, t_labels);
}
void IRListener::exitIfStmt(C0Parser::IfStmtContext * ctx) {
    // std::cout<<if_labels.get(ctx)[0];
    auto labels = if_labels.get(ctx);

    if (labels.size() == 2) {
        ir.addIMC(labels[1], OP::LABEL, "0", "0");  
    }
    else if(labels.size() == 1) {
        ir.addIMC(labels[0], OP::LABEL, "0", "0");  
    }
}

void IRListener::exitIfCondition(C0Parser::IfConditionContext * ctx) {
    auto labels = if_labels.get(ctx->parent);

    auto t_var = temp_var.get(ctx->expression());

    if (t_var == "") {
        // 说明是binaryExpr,　跳转在exitExpr中
    }
    else {
        ir.addIMC(labels[0], OP::EQU, t_var, "0");
    }
}

void IRListener::enterElseStatement(C0Parser::ElseStatementContext * ctx) {
    auto labels = if_labels.get(ctx->parent);

    ir.addIMC(labels[1], OP::GOTO, "0", "0");
    ir.addIMC(labels[0], OP::LABEL, "0", "0");
}


void IRListener::enterWhileStmt(C0Parser::WhileStmtContext * ctx) {
    auto label1 = ir.gen_label();
    auto label2 = ir.gen_label();

    ir.addIMC(label1, OP::LABEL, "0", "0");

    std::vector<std::string> t_labels = {label1, label2};
    while_labels.put(ctx, t_labels);

}
void IRListener::exitWhileStmt(C0Parser::WhileStmtContext * ctx) {
    auto labels = while_labels.get(ctx);
    ir.addIMC(labels[0], OP::GOTO, "0", "0");
    ir.addIMC(labels[1], OP::LABEL, "0", "0");
}

void IRListener::exitWhileCondition(C0Parser::WhileConditionContext * ctx) {
    auto labels = while_labels.get(ctx->parent);

    auto t_var = temp_var.get(ctx->expression());

    if (t_var == "") {
        // 说明是binaryExpr,　跳转在exitExpr中
    }
    else {
        ir.addIMC(labels[1], OP::EQU, t_var, "0");
    }
}

void IRListener::enterForStmt(C0Parser::ForStmtContext * ctx) {
    auto label1 = ir.gen_label();
    auto label2 = ir.gen_label();

    std::vector<std::string> t_labels = {label1, label2};
    for_labels.put(ctx, t_labels);
}
void IRListener::exitForStmt(C0Parser::ForStmtContext * ctx) {
    // step ass
    if (ctx->forStep()) {
        auto step_ass = for_step_ass.get(ctx->forStep());
        ir.addIMC(step_ass.rst, step_ass.op, step_ass.num1, step_ass.num2);
    }
    

    auto labels = for_labels.get(ctx);

    ir.addIMC(labels[0], OP::GOTO, "0", "0");
    ir.addIMC(labels[1], OP::LABEL, "0", "0");
}

void IRListener::enterForCondition(C0Parser::ForConditionContext * ctx) {
    auto labels = for_labels.get(ctx->parent);

    ir.addIMC(labels[0], OP::LABEL, "0", "0");
}

void IRListener::exitForCondition(C0Parser::ForConditionContext * ctx) {
    auto labels = for_labels.get(ctx->parent);

    auto t_var = temp_var.get(ctx->expression());

    if (t_var == "") {
        // 说明是binaryExpr,　跳转在exitExpr中
    }
    else {
        ir.addIMC(labels[1], OP::EQU, t_var, "0");
    }

}

void IRListener::exitForStep(C0Parser::ForStepContext * ctx) {
    auto back_ir = ir.popIMR();
    if (back_ir.op==OP::ADD && back_ir.num1=="0") {// 是赋值语句
        for_step_ass.put(ctx, back_ir);
    }
    else {
        ir.addIMC(back_ir.rst, back_ir.op, back_ir.num1, back_ir.num2);
    }
}

void IRListener::enterFuncallExpr(C0Parser::FuncallExprContext * ctx) {
    auto func_name = ctx->expression()->getText();

    int param_num = 0;
    if (ctx->expressionList())
        param_num = ctx->expressionList()->expression().size();

    // std::cout<<param_num<<'\n';
    // 当前scope查找func
    auto func_info = sym_table.lookup(curr_func, func_name, false);

    if (func_info->type != TYPE_FUNC) {
        throw std::runtime_error("expecting func type at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    temp_cls.put(ctx, func_info->cls);

    if (param_num != func_info->length) {// 参数数量不一致
        throw std::runtime_error("param num error at line: "+std::to_string(ctx->getStart()->getLine()));
    }

}
void IRListener::exitFuncallExpr(C0Parser::FuncallExprContext * ctx) {
    auto func_name = ctx->expression()->getText();

    auto func_info = sym_table.lookup(curr_func, func_name, false);

    auto func_symtab = sym_table.lookup_func(func_name);

    int cnt = 0;
    for (auto& param : ctx->expressionList()->expression()) {
        ir.addIMC(func_name, OP::PUSH_PARA, temp_var.get(param), std::to_string(cnt));

        auto* para_info = sym_table.lookup_para(func_symtab, cnt);
        if (para_info->cls != temp_cls.get(param)) {
            throw std::runtime_error("unmatch param type at line: "+std::to_string(ctx->getStart()->getLine()));
        }
        cnt++;
    }

    ir.addIMC(func_name, OP::CALL, "0", "0");
    if (func_info->cls == CLS_VOID) {
        ;
    }
    else {
        auto ret_var = ir.gen_temp(curr_func, ctx->getStart()->getLine(), func_info->cls, sym_table);
        ir.addIMC(ret_var, OP::ADD, OP::RETURN_REG, "0");
        temp_var.put(ctx, ret_var);
    }

    temp_cls.put(ctx, func_info->cls);

}

void IRListener::exitPrintfExpr(C0Parser::PrintfExprContext * ctx) {
    int param_num = 0;
    if (ctx->expressionList())
        param_num = ctx->expressionList()->expression().size();
    
    for (int i=0; i<param_num; i++) {
        auto expr = ctx->expressionList()->expression()[i];
        auto expr_cls = temp_cls.get(expr);
        auto expr_var = temp_var.get(expr);

        if (expr_cls == CLS_STR) {
            ir.addIMC("str", OP::PRINT, OP::STR_HEAD+expr_var, "0");
        }
        else if (expr_cls == CLS_INT) {
            ir.addIMC("int", OP::PRINT, expr_var, "0");
        }
        else if (expr_cls == CLS_CHAR) {
            ir.addIMC("char", OP::PRINT, expr_var, "0");
        }
    }
}

void IRListener::enterScanfExpr(C0Parser::ScanfExprContext * ctx) {
    int param_num = 0;
    if (ctx->expressionList())
        param_num = ctx->expressionList()->expression().size();
    
    for (int i=0; i<param_num; i++) {
        auto param = ctx->expressionList()->expression()[i];
        auto param_name = param->getText();

        auto param_info = sym_table.lookup(curr_func, param_name, false);

        if (param_info == NULL) {
            throw std::runtime_error("undefined param at line: "+std::to_string(ctx->getStart()->getLine()));
        }

        if (param_info->type == TYPE_VAR || param_info->type == TYPE_PARAM) {// 只有这两种可scan
            if (param_info->cls == CLS_INT) {
                ir.addIMC("int", OP::SCAN, param_name, "0");
            }
            else if (param_info->cls == CLS_CHAR) {
                ir.addIMC("char", OP::SCAN, param_name, "0");
            }
            else {
                throw std::runtime_error("error cls param of scanf at line: "+std::to_string(ctx->getStart()->getLine()));
            }
        }   
        else {
            throw std::runtime_error("error type param of scanf at line: "+std::to_string(ctx->getStart()->getLine()));
        }
    }
}

void IRListener::exitReturnStmt(C0Parser::ReturnStmtContext * ctx) {

    auto func_info = sym_table.lookup("", curr_func, false);

    // std::cout<<func_info->cls<<' '<<CLS_INT<<'\n';
    if (func_info->cls == CLS_VOID) {
        if (ctx->expression()) {// void 写了返回值
            throw std::runtime_error("unexpect expr in return at line: "+std::to_string(ctx->getStart()->getLine()));
        }
    }
    else {
        if (!ctx->expression()) {// 恰恰相反，有返回值没写
            throw std::runtime_error("expect expr in return at line: "+std::to_string(ctx->getStart()->getLine()));
        }

        // check cls
        auto expr_cls = temp_cls.get(ctx->expression());
        if (expr_cls != func_info->cls) {
            throw std::runtime_error("wrong type expr in return at line: "+std::to_string(ctx->getStart()->getLine()));
        }

        auto expr_var = temp_var.get(ctx->expression());
        ir.addIMC(OP::RETURN_REG, OP::ADD, expr_var, "0");
    }

    if (curr_func == "main")
        ir.addIMC("0", OP::EXIT, "0", "0");
    else
        ir.addIMC("0", OP::EXIT, "0", "0");

}

void IRListener::enterBreakStmt(C0Parser::BreakStmtContext * ctx) {
    antlr4::tree::ParseTree* loop_node = ctx->parent;
    bool has_loop = false;
    std::string jump_label = "";

    while (loop_node) {
        if (for_labels.get(loop_node).size() || while_labels.get(loop_node).size()) {// 有loop
            has_loop = true;

            if (for_labels.get(loop_node).size()) {
                jump_label = for_labels.get(loop_node)[1];
            }
            else {
                jump_label = while_labels.get(loop_node)[1];
            }
            break;
        }
        loop_node = loop_node->parent;
    }
    if (!has_loop) {
        throw std::runtime_error("invaild break at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    else {
        ir.addIMC(jump_label, OP::GOTO, "0", "0");
    }
}

void IRListener::enterContinueStmt(C0Parser::ContinueStmtContext * ctx) {
    antlr4::tree::ParseTree* loop_node = ctx->parent;
    bool has_loop = false;
    std::string jump_label = "";

    while (loop_node) {
        if (for_labels.get(loop_node).size() || while_labels.get(loop_node).size()) {// 有loop
            has_loop = true;

            if (for_labels.get(loop_node).size()) {
                jump_label = for_labels.get(loop_node)[0];
            }
            else {
                jump_label = while_labels.get(loop_node)[0];
            }
            break;
        }
        loop_node = loop_node->parent;
    }
    // 寻找赋值语句
    auto loop_children = loop_node->children;
    bool has_ass = false;
    IRCode ass_stmt;
    
    for (auto& child : loop_children) {
        auto t_ass = for_step_ass.get(child);
        if (t_ass.op == OP::ADD && t_ass.num1 == "0") {// 赋值鸭
            has_ass = true;
            ass_stmt.rst = t_ass.rst;
            ass_stmt.op = t_ass.op;
            ass_stmt.num1 = t_ass.num1;
            ass_stmt.num2 = t_ass.num2;
            break;
        }
    }

    if (!has_loop) {
        throw std::runtime_error("invaild break at line: "+std::to_string(ctx->getStart()->getLine()));
    }
    else {
        if (has_ass)
            ir.addIMC(ass_stmt.rst, ass_stmt.op, ass_stmt.num1, ass_stmt.num2);
        ir.addIMC(jump_label, OP::GOTO, "0", "0");
    }

}