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
    else if (rhs_varinfo && rhs_varinfo->type == TYPE_CONST) {
        if (rhs_varinfo->cls == CLS_CHAR) {
            rhs = "\'";
            rhs.push_back((char)rhs_varinfo->length);
            rhs += "\'";
        }
        else if (rhs_varinfo->cls == CLS_INT) {
            rhs = std::to_string(rhs_varinfo->length);
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
        std::string var_val = ctx->CharLiteral()->getText();

        temp_cls.put(ctx, CLS_CHAR);
        temp_var.put(ctx, var_val);
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

    if (t_varinfo->type == TYPE_CONST) {// 转字面量
        if (t_varinfo->cls == CLS_INT) {
            temp_var.put(ctx, std::to_string(t_varinfo->length));
            return ;
        }
        else if (t_varinfo->cls == CLS_CHAR) {
            std::stringstream t_ss;
            t_ss<<"\'"<<(char)t_varinfo->length<<"\'";
            temp_var.put(ctx, t_ss.str());
            return;
        }
    }
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
        // 说明是binaryExpr, 跳转在exitExpr中
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
        // 说明是binaryExpr, 跳转在exitExpr中
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
        // 说明是binaryExpr, 跳转在exitExpr中
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
    if (!func_info) {
        throw std::runtime_error("undefine funct at line"+std::to_string(ctx->getStart()->getLine()));
    }
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

        auto expr_info = sym_table.lookup(curr_func, expr_var, false);
        if (expr_info && expr_info->type == TYPE_ARRAY) {
            auto t_v = ir.gen_temp(curr_func, ctx->getStop()->getLine(), expr_info->cls, sym_table);
            auto expr_idx = temp_idx.get(expr);
            ir.addIMC(t_v, OP::READ_ARR, expr_var, expr_idx);
            expr_var = t_v;
        }

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
        ir.addIMC("0", OP::RET, "0", "0");

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



void IRListener::MipsGen(std::string out_file) {
    curr_func = "";

    // .data域分配全局变量和str

    // 名字前面加_防名字冲突
    mips_codes.push_back(".data");
    // char and char array
    for (auto& iter : sym_table.global_symbols) {
        if (iter.second.type == TYPE_VAR && iter.second.cls == CLS_CHAR) {
            mips_codes.push_back("_"+iter.first + " : .byte 0");
            iter.second.addr = head_addr;
            head_addr += 1;// 1 byte
        }
        else if (iter.second.type == TYPE_ARRAY && iter.second.cls == CLS_CHAR) {
            mips_codes.push_back(
                "_"+iter.first + " : .space "+std::to_string(iter.second.length)
                );
            iter.second.addr = head_addr;
            head_addr += iter.second.length;
        }
    }
    // int 32bit对齐
    head_addr += 4-head_addr&0x3;
    mips_codes.push_back(".align 2");

    for (auto& iter : sym_table.global_symbols) {
        if (iter.second.type == TYPE_VAR && iter.second.cls == CLS_INT) {
            mips_codes.push_back(
                "_"+iter.first + " : .word 0"
                );
            iter.second.addr = head_addr;
            head_addr += 4; // 4 bytes
        }
        else if (iter.second.type == TYPE_ARRAY && iter.second.cls == CLS_INT) {
            mips_codes.push_back(
                "_"+iter.first + " : .space "+std::to_string(iter.second.length*4)
                );
            iter.second.addr = head_addr;
            head_addr += iter.second.length*4;
        }
    }
    // str
    for (auto& iter : sym_table.str_symbols) {
        mips_codes.push_back(
            "string_"+std::to_string(iter.second) + " : .asciiz " + iter.first
            );
        head_addr += iter.first.length();
    }

    // 分配函数栈中地址
    // 1. 参数
    // 2. local var
    for (auto& func_tab : sym_table.func_symbols) {
        int t_addr = 0;
        for (int p_cnt=0; p_cnt<sym_table.global_symbols[func_tab.first].length; p_cnt++) {
            for (auto& iter : func_tab.second) {
                if (iter.second.type == TYPE_PARAM && iter.second.length == p_cnt) {
                    iter.second.addr = t_addr;
                    t_addr += 4;
                }
            }
        }
        for (auto& iter : func_tab.second) {
            // 上面做了 || 作为常量
            if (iter.second.type == TYPE_PARAM || iter.second.type == TYPE_CONST)  continue;

            if (iter.second.cls == CLS_CHAR) {
                iter.second.addr = t_addr;
                if (iter.second.type == TYPE_VAR) {
                    t_addr += 1;
                }
                else {// array
                    t_addr += iter.second.length;
                }
            }
        }
        // 对齐
        t_addr += 4-t_addr&0x3;
        for (auto& iter : func_tab.second) {
            //　同上
            if (iter.second.type == TYPE_PARAM || iter.second.type == TYPE_CONST) continue;

            if (iter.second.cls == CLS_INT) {
                iter.second.addr = t_addr;
                if (iter.second.type == TYPE_VAR) {
                    t_addr += 4;
                }
                else {// array
                    t_addr += iter.second.length * 4;
                }
            }
        }
        func_frame_size[func_tab.first] = t_addr;
    }

    mips_codes.push_back(".text");
    mips_codes.push_back(".globl main");
    mips_codes.push_back("j main");

    for (auto i=ir.ir_codes.begin(); i!=ir.ir_codes.end(); i++) {
        auto ins = *i;
    
        if (ins.op == OP::FUNC_BEGIN) {
            MipsFuncBegin(ins);
        }
        else if (ins.op == OP::LABEL) {
            MipsLabel(ins);
        }
        else if (ins.op == OP::EXIT) {
            MipsExit(ins);
        }
        else if (ins.op == OP::GOTO) {
            MipsGoto(ins);
        }
        else if (ins.op == OP::PUSH_PARA) {
            MipsPush(ins, i);
        }
        else if (ins.op == OP::CALL) {
            MipsCall(ins);
        } 
        else if (ins.op == OP::FUNC_END || ins.op == OP::RET) {
            MipsReturn(ins);
        }
        else if (ins.op == OP::EQU || ins.op == OP::NEQ
              || ins.op == OP::GRT || ins.op == OP::GREQ
              || ins.op == OP::LES || ins.op == OP::LESEQ   ) {
            MipsCmp(ins, i);
        }
        else if (ins.op == OP::ADD || ins.op == OP::SUB
              || ins.op == OP::MUL || ins.op == OP::DIV) {
            MipsCalc(ins, i);
        }
        else if (ins.op == OP::SAVE_ARR) {
            MipsSaveArr(ins, i);
        }
        else if (ins.op == OP::READ_ARR) {
            MipsReadArr(ins, i);
        }
        else if (ins.op == OP::SCAN) {
            MipsScanf(ins);
        }
        else if (ins.op == OP::PRINT) {
            MipsPrintf(ins, i);
        }
        else {
            throw std::runtime_error("unexpect ir op");
        }

    }

    mips_codes.push_back("exit:");
    // 输出到文件，清空再输入（覆盖
    std::ofstream out(out_file, std::ios::trunc);
    
    bool out_tab = false;
    for (auto& ins : mips_codes) {
        if (ins == ".text") {
            out_tab = true;
            out<<ins<<std::endl;
            continue;
        }
        if (out_tab && ins!=".globl main" && ins.find(':')==-1) {
            out<<'\t';
        }
        out<<ins<<std::endl;
    }
    out.close();
}

void IRListener::MipsFuncBegin(IRCode& c) {
    if (c.rst == "main") {
        mips_codes.push_back(c.rst+":");
    }
    else {
        mips_codes.push_back("func_"+c.rst+":");
    }
    curr_func = c.rst;

    run_info.init(sym_table.func_symbols[curr_func]);
}

void IRListener::MipsLabel(IRCode& c) {
    auto lab = c.rst.erase(0, 1);
    mips_codes.push_back("label"+lab + ":");
}

void IRListener::MipsExit(IRCode& c) {
    mips_codes.push_back("j exit");
}

void IRListener::MipsGoto(IRCode& c) {
    mips_codes.push_back("j "+mark2label(c.rst));
}

void IRListener::MipsPush(IRCode& c, std::vector<IRCode>::iterator& o) {
    // 相对sp的offset，注意是绝对值而不是负值
    int offset;
    if (ParaInfoStack.empty()) {
        offset = mips_getFrameSize();
    }
    else {
        offset = ParaInfoStack.top().offset + 4;
    }

    int value;
    auto is_literal = mips_isLiteral(c.num1, value);

    // 需要先存到reg
    std::string save_reg;

    if (is_literal) {
        save_reg = MIPS::T9;
        std::stringstream ss;
        ss<<MIPS::LI<<" "<<MIPS::T9<<" "<<value;
        mips_codes.push_back(ss.str());
    }
    else {
        // 在寄存器中找一个先放着
        save_reg = mips_seekReg(c.num1, true);
        mips_checkRegUse(c.num1, save_reg, o);
    }
    
    std::stringstream ss;
    ss<<MIPS::SW<<" "<<save_reg<<" -"<<offset<<" ("<<MIPS::SP<<")";
    mips_codes.push_back(ss.str());

    ParaInfo t;
    t.func_name = c.rst;
    t.offset = offset;
    ParaInfoStack.push(t);
}   

void IRListener::MipsCall(IRCode& c) {
    // 保存现场
    std::string func_name = c.rst;
    auto last_push_offset = 0;
    if (ParaInfoStack.empty()) {
        last_push_offset = mips_getFrameSize() - 4;
    }
    else {
        last_push_offset = ParaInfoStack.top().offset;
    }
    // 保存现场
    // 相较旧sp的offset
    auto stack_ptr = last_push_offset+4 
        - sym_table.global_symbols[func_name].length*4 
        + func_frame_size[func_name];
    
    // used就保存
    for (auto i=0; i<17; i++) {
        if (run_info.reg_used[i]) {
            std::stringstream ss;
            ss<<MIPS::SW<<" "<<idx2reg(i)<<" -"<<stack_ptr<<" ("<<MIPS::SP<<")";
            mips_codes.push_back(ss.str());

            stack_ptr += 4;
        }
    }
    // push ra
    stack_ptr = last_push_offset+4 
        - sym_table.global_symbols[func_name].length*4 
        + func_frame_size[func_name]
        + 4 * (17);
    
    std::stringstream ss;
    ss<<MIPS::SW<<" "<<MIPS::RA<<" -"<<stack_ptr<<" ("<<MIPS::SP<<")";
    mips_codes.push_back(ss.str());

    stack_ptr += 4;
    
    
    for (auto i=0; i<sym_table.global_symbols[func_name].length; i++) {
        assert(ParaInfoStack.top().func_name == func_name);
        ParaInfoStack.pop();
    }
    // 计算sp offset，并更改sp
    int sp_change = 0;
    if (ParaInfoStack.empty()) {
        sp_change = mips_getFrameSize();
    }
    else {
        sp_change = ParaInfoStack.top().offset + 4;
    }

    ss.str("");
    ss<<MIPS::ADDI<<" "<<MIPS::SP<<" "<<MIPS::SP<<" "<<(-1*sp_change);
    mips_codes.push_back(ss.str());

    ss.str("");
    ss<<MIPS::JAL<<" "<<mark2func(c.rst);
    mips_codes.push_back(ss.str());

    ss.str("");
    ss<<MIPS::ADDI<<" "<<MIPS::SP<<" "<<MIPS::SP<<" "<<sp_change;
    mips_codes.push_back(ss.str());

    // 恢复ra
    stack_ptr -= 4;
    ss.str("");
    ss<<MIPS::LW<<" "<<MIPS::RA<<" -"<<stack_ptr<<" ("<<MIPS::SP<<")";
    mips_codes.push_back(ss.str());

    stack_ptr = last_push_offset+4 
        - sym_table.global_symbols[func_name].length*4 
        + func_frame_size[func_name];
    // 恢复reg
    for (auto i=0; i<17; i++) {
        if (run_info.reg_used[i]) {
            ss.str("");
            ss<<MIPS::LW<<" "<<idx2reg(i)<<" -"<<stack_ptr<<" ("<<MIPS::SP<<")";
            mips_codes.push_back(ss.str());

            stack_ptr += 4;
        }
    }
}

void IRListener::MipsReturn(IRCode& c) {
    if (c.op == OP::FUNC_END) {
        curr_func = "";
    }
    std::stringstream ss;
    ss<<MIPS::JR<<" "<<MIPS::RA;
    mips_codes.push_back(ss.str());
}

void IRListener::MipsCmp(IRCode& c, std::vector<IRCode>::iterator& o) {
    auto cop = c.op;
	auto r1 = c.num1, r2 = c.num2;

    int v1, v2;
    bool r1_literal = mips_isLiteral(c.num1, v1);
    bool r2_literal = mips_isLiteral(c.num2, v2);

    std::string r1_reg, r2_reg;

    std::stringstream ss;
    if (cop == OP::EQU || cop == OP::NEQ) {
        bool is_beq = (cop == OP::EQU);
        if (r1_literal && r2_literal) {// 都为字面量
            bool eq = (v1 == v2);
            if ((is_beq&&eq) || (!is_beq&&!eq)) {// 可直接跳转
                ss<<MIPS::J<<" "<<mark2label(c.rst);
            }
            else {// 不跳就跳过，谐音梗扣分
                ;
            }
        }
        else if (!r1_literal && r2_literal) {
            r1_reg = mips_seekReg(r1, true);
            ss<<(is_beq? MIPS::BEQ : MIPS::BNE)
              <<" "<<r1_reg<<" "<<v2<<" "<<mark2label(c.rst);
        }
        else if (r1_literal && !r2_literal) {
            r2_reg = mips_seekReg(r2, true);
            ss<<(is_beq? MIPS::BEQ : MIPS::BNE)
              <<" "<<r2_reg<<" "<<v1<<" "<<mark2label(c.rst);
        }
        else if (!r1_literal && !r2_literal) {
            r1_reg = mips_seekReg(r1, true);
            r2_reg = mips_seekReg(r2, true);
            ss<<(is_beq? MIPS::BEQ : MIPS::BNE)
              <<" "<<r1_reg<<" "<<r2_reg<<" "<<mark2label(c.rst);
        }
    }
    else {
        if (r1_literal && r2_literal) {

			if((cop == OP::GRT && v1 > v2) ||
            (cop == OP::GREQ && v1 >= v2) ||
            (cop == OP::LES && v1 < v2) ||
            (cop == OP::LESEQ && v1 <= v2))
				ss << MIPS::J << " " << mark2label(c.rst);
        }
        else if (!r1_literal & r2_literal) {
            r1_reg = mips_seekReg(r1, true);
            if (v2==0) {
                auto t_op = cop == OP::GRT ? MIPS::BGTZ :
					cop == OP::GREQ ? MIPS::BGEZ :
					cop == OP::LES ? MIPS::BLTZ : MIPS::BLEZ;
                ss << t_op << " " << r1_reg << " " << mark2label(c.rst);
            }
            else {
                auto t_op = cop == OP::GRT ? MIPS::BGT :
					cop == OP::GREQ ? MIPS::BGE :
					cop == OP::LES ? MIPS::BLT : MIPS::BLE;
                ss << t_op << " " << r1_reg << " " << v2 << " " << mark2label(c.rst);
            }
        }
        else if (r1_literal && !r2_literal) {
            r2_reg = mips_seekReg(r2, true);
            if (v1==0) {
                auto t_op = cop == OP::GRT ? MIPS::BLTZ :
					cop == OP::GREQ ? MIPS::BLEZ :
					cop == OP::LES ? MIPS::BGTZ : MIPS::BGEZ;
				ss << t_op << " " << r2_reg << " " << mark2label(c.rst);
            }
            else {
                auto t_op = cop == OP::GRT ? MIPS::BLT :
					cop == OP::GREQ ? MIPS::BLE :
					cop == OP::LES ? MIPS::BGT : MIPS::BGE;
				ss << t_op << " " << r2_reg << " " << v1 << " " << mark2label(c.rst);
            }
        }
        else if (!r1_literal && !r2_literal) {
            r1_reg = mips_seekReg(r1, true);
            r2_reg = mips_seekReg(r2, true);
            auto t_op = cop == OP::GRT ? MIPS::BGT :
				cop == OP::GREQ ? MIPS::BGE :
				cop == OP::LES ? MIPS::BLT : MIPS::BLE;
            ss << t_op << " " << r1_reg << " " << r2_reg << " " << mark2label(c.rst);
        }
    }
    mips_codes.push_back(ss.str());

    if (!r1_literal) {
        mips_checkRegUse(r1, r1_reg, o);
    }
    if (!r2_literal) {
        mips_checkRegUse(r2, r2_reg, o);
    }
}

void IRListener::MipsCalc(IRCode& c, std::vector<IRCode>::iterator& o) {
    auto cop = c.op;
	auto r1 = c.num1, r2 = c.num2;

    int v1, v2;
    bool r1_literal = mips_isLiteral(c.num1, v1);
    bool r2_literal = mips_isLiteral(c.num2, v2);

    std::string r1_reg, r2_reg;

    std::stringstream ss;
    if(c.rst == MIPS::RETV0) {// 返回时候的赋值
        if (r1_literal) {
            ss << MIPS::LI << " " << MIPS::V0 << " " << v1;
        }
        else {
            r1_reg = mips_seekReg(r1, true);
            ss << MIPS::MOVE << " " << MIPS::V0 << " " << r1_reg;
            mips_checkRegUse(r1, r1_reg, o);
        }
        mips_codes.push_back(ss.str());
        return ;
    }
    
    std::string rd_reg;
    if (r1 == MIPS::RETV0) {
        rd_reg = mips_seekReg(c.rst, false);
        ss << MIPS::MOVE << " " << rd_reg << " " << MIPS::V0;
        mips_codes.push_back(ss.str());
        return ;
    }

    if (r1_literal && r2_literal) {
        int val =
			c.op == OP::ADD ? v1 + v2 :
			c.op == OP::SUB ? v1 - v2 :
			c.op == OP::MUL ? v1 * v2 :
			c.op == OP::DIV ? v1 / v2 : 0;
        rd_reg = mips_seekReg(c.rst, false);
        if (val == 0) {
            ss << MIPS::ADD << " " << rd_reg << " " << MIPS::ZERO << " " << MIPS::ZERO;
        }
        else {
            ss << MIPS::LI << " " << rd_reg << " " << val;
        }
        mips_codes.push_back(ss.str());
    }
    else if (!r1_literal && !r2_literal) {
        r1_reg = mips_seekReg(r1, true);
        r2_reg = mips_seekReg(r2, true);
        rd_reg = mips_seekReg(c.rst, false);
        auto t_op = 
            cop == OP::ADD ? MIPS::ADD :
			cop == OP::SUB ? MIPS::SUB :
			cop == OP::MUL ? MIPS::MUL : MIPS::DIV;
        ss << t_op << " " << rd_reg << " " << r1_reg << " " << r2_reg; 
        mips_codes.push_back(ss.str());
    }
    else if (r1_literal && !r2_literal) {
        r2_reg = mips_seekReg(r2, true);
        if (v1==0) {
            rd_reg = mips_seekReg(c.rst, false);
            if (cop == OP::ADD) {
                ss << MIPS::MOVE << " " << rd_reg << " " <<r2_reg;
            }
            else if (cop == OP::SUB) {
                ss << MIPS::SUB << " " << rd_reg << " " << MIPS::ZERO << " " << r2_reg;
            }
            else if (cop == OP::MUL || cop == OP::DIV) {
                ss << MIPS::MOVE << " " << rd_reg << " " << MIPS::ZERO;
            }
            else {
                assert(false);
            }
            mips_codes.push_back(ss.str());
        }
        else {
            rd_reg = mips_seekReg(c.rst, false);
            if (cop == OP::ADD) {
                ss << MIPS::ADD << " " << rd_reg << " " << r2_reg << " " << v1;
            }
            else if (cop == OP::SUB) {
                ss << MIPS::SUB << " " << MIPS::T9 << " " << r2_reg << " " << v1;
                mips_codes.push_back(ss.str());

                ss.str("");
                ss << MIPS::SUB << " " << rd_reg << " " << MIPS::ZERO << " " << MIPS::T9;
            }
            else if (cop == OP::MUL) {
                ss << MIPS::MUL << " " << rd_reg << " " << r2_reg << " " << v1;
            }
            else if (cop == OP::DIV) {
                ss << MIPS::LI << " " << MIPS::T9 << " " << v1; 
                mips_codes.push_back(ss.str());

                ss.str();
                ss << MIPS::DIV << " " << rd_reg << " " << MIPS::T9 << " " << r2_reg;
            }
            else {
                assert(false);
            }
            mips_codes.push_back(ss.str());
        }
    }
    else if (!r1_literal && r2_literal) {
        r1_reg = mips_seekReg(r1, true);
        if (v2 == 0) {
            rd_reg = mips_seekReg(c.rst, false);
            if (cop==OP::ADD || cop==OP::SUB) {
                ss << MIPS::MOVE << " " << rd_reg << " " <<r1_reg;
            }
            else if (cop == OP::MUL || cop == OP::DIV) {
                ss << MIPS::MOVE << " " << rd_reg << " " << MIPS::ZERO;
            }
            else {
                assert(false);
            }
            mips_codes.push_back(ss.str());
        }
        else {
            rd_reg = mips_seekReg(c.rst, false);
            auto t_op = 
                c.op == OP::ADD ? MIPS::ADD :
				c.op == OP::SUB ? MIPS::SUB :
				c.op == OP::MUL ? MIPS::MUL : MIPS::DIV;
            ss << t_op << " " << rd_reg << " " << r1_reg << " " << v2;
            mips_codes.push_back(ss.str());
        }
    }
    else {
        assert(false);
    }
    mips_writeRam(c.rst, rd_reg);
    if (!r1_literal)
        mips_checkRegUse(c.num1, r1_reg, o);
    if (!r2_literal)
        mips_checkRegUse(c.num2, r2_reg, o);

}

void IRListener::MipsSaveArr(IRCode& c, std::vector<IRCode>::iterator& o) {
    auto arr = c.rst;
    auto index = c.num1;
    auto value = c.num2;

    std::stringstream ss;

    VarInfo arr_info;
    bool local = false;
    int idx, val;

    bool idx_literal = mips_isLiteral(index, idx);
    bool val_literal = mips_isLiteral(value, val);

    if (run_info.sym_tab.count(arr) > 0) {
        arr_info = run_info.sym_tab[arr];
        local = true;
    }
    else {
        assert(sym_table.global_symbols.count(arr) > 0);
        arr_info = sym_table.global_symbols[arr];
    }
    assert(arr_info.type == TYPE_ARRAY);
    int element_size = 1;
    std::string save_op = MIPS::SB;
    if (arr_info.cls == CLS_INT) {
        element_size = 4;
        save_op = MIPS::SW;
    }
    else {
        assert(arr_info.cls == CLS_CHAR);
    }

    std::string idx_reg, val_reg;
    if (val_literal) {
        ss << MIPS::LI << " " << MIPS::T9 << " " << val;
        mips_codes.push_back(ss.str());
        ss.str("");
        val_reg = MIPS::T9;
    }
    else {
        val_reg = mips_seekReg(value, true);
    }

    if (local) {
        if (idx_literal) {
            ss << save_op << " " << val_reg << " "
               << -1*(idx*element_size + arr_info.addr) << " (" << MIPS::SP << ")";
            mips_codes.push_back(ss.str());
        }
        else {
            idx_reg = mips_seekReg(index, true);
            // 先乘
            if (element_size > 1) { // int
                ss << MIPS::SLL << " " << MIPS::T8 << " " << idx_reg << " " << 2;
                mips_codes.push_back(ss.str());
                ss.str("");

                ss << MIPS::ADDI << " " << MIPS::T8 << " " << MIPS::T8 << " " << arr_info.addr;
                mips_codes.push_back(ss.str());
                ss.str("");
            }
            else {
                ss << MIPS::ADDI << " " << MIPS::T8 << " " << idx_reg << " " << arr_info.addr;
                mips_codes.push_back(ss.str());
                ss.str("");
            }
            ss << MIPS::SUB << " " << MIPS::T8 << " " << MIPS::SP << " " << MIPS::T8;
            mips_codes.push_back(ss.str());
            ss.str("");

            ss << save_op << " " << val_reg << " " << " ("<<MIPS::T8<<")";
            mips_codes.push_back(ss.str());
            ss.str("");
        }
    }
    else {
        if (idx_literal) {
            ss << save_op << " " << val_reg << " " << mark2gvar(arr) << "+" << idx*element_size;
            mips_codes.push_back(ss.str());
        }
        else {
            idx_reg == mips_seekReg(index, true);
            if (element_size > 1) {
                ss << MIPS::SLL << " " << MIPS::T8 << " " << idx_reg << " " << int(log2(element_size));
                mips_codes.push_back(ss.str());
                ss.str("");
            }
            ss << save_op << " " << val_reg << " " << mark2gvar(arr) << " ("<<(element_size>1? MIPS::T8:idx_reg)<<")";
            mips_codes.push_back(ss.str());
            ss.str("");
        }
    }
    if (!idx_literal) {
        mips_checkRegUse(index, idx_reg, o);
    }
    if (!val_literal) {
        mips_checkRegUse(value, val_reg, o);
    }
}

void IRListener::MipsReadArr(IRCode& c, std::vector<IRCode>::iterator& o) {
    auto arr = c.num1;
    auto index = c.num2;
    auto dst = c.rst;

    VarInfo arr_info;
    bool local = false;
    int idx;

    bool idx_literal = mips_isLiteral(index, idx);
    std::string idx_reg;
    if (run_info.sym_tab.count(arr) > 0) {
        arr_info = run_info.sym_tab[arr];
        local = true;
    }
    else {
        assert(sym_table.global_symbols.count(arr) > 0);
        arr_info = sym_table.global_symbols[arr];
    }

    assert(arr_info.type == TYPE_ARRAY);
    int element_size = 1;
    if (arr_info.cls == CLS_INT) {
        element_size = 4;
    }
    else {
        assert(arr_info.cls == CLS_CHAR);
    }

    std::string rd_reg;
    std::stringstream ss;
    if (local) {

        if (idx_literal) {
            rd_reg = mips_seekReg(dst, false);
            ss << (arr_info.cls == CLS_INT? MIPS::LW:MIPS::LBU) 
               << " " << rd_reg << " -" << arr_info.addr + idx*element_size << "("<<MIPS::SP<<")";
        }
        else {
            idx_reg = mips_seekReg(index, true);
            rd_reg = mips_seekReg(dst, false);
            if (arr_info.cls == CLS_INT) {
                ss<<MIPS::SLL<<" "<<MIPS::T9<<" "<<idx_reg<<" "<<2; mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::ADDI<<" "<<MIPS::T9<<" "<<MIPS::T9<<" "<<arr_info.addr; mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::SUB<<" "<<MIPS::T9<<" "<<MIPS::SP<<" "<<MIPS::T9;mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::LW<<" "<<rd_reg<<" ("<<MIPS::T9<<")";mips_codes.push_back(ss.str());ss.str("");
            }
            else {
                ss<<MIPS::ADDI<<" "<<MIPS::T9<<" "<<idx_reg<<" "<<arr_info.addr;mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::SUB<<" "<<MIPS::T9<<" "<<MIPS::SP<<" "<<MIPS::T9;mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::LBU<<" "<<rd_reg<<" ("<<MIPS::T9<<")";mips_codes.push_back(ss.str());ss.str("");
            }
        }
    }
    else {

        if (idx_literal) {
            rd_reg = mips_seekReg(dst, false);
            ss<<(arr_info.cls==CLS_INT? MIPS::LW:MIPS::LBU)
              <<" "<<rd_reg<<" "<<mark2gvar(arr)<<"+"<<idx*element_size;
            mips_codes.push_back(ss.str());
        }
        else {
            idx_reg = mips_seekReg(index, true);
            rd_reg = mips_seekReg(dst, false);
            if (arr_info.cls==CLS_INT) {
                ss<<MIPS::SLL<<" "<<MIPS::T9<<" "<<idx_reg<<" "<<2;mips_codes.push_back(ss.str());ss.str("");
                ss<<MIPS::LW<<" "<<rd_reg<<" "<<mark2gvar(arr)<<"("<<MIPS::T9<<")";mips_codes.push_back(ss.str());ss.str("");
            }
            else {
                ss<<MIPS::LBU<<" "<<rd_reg<<" "<<mark2gvar(arr)<<"("<<idx_reg<<")";mips_codes.push_back(ss.str());ss.str("");
            }
        }
    }
    mips_writeRam(c.rst, rd_reg);

    if (!idx_literal)
        mips_checkRegUse(index, idx_reg, o);
}

void IRListener::MipsScanf(IRCode& c) {
    std::stringstream ss;
    if (c.rst == "int") {
        ss<<MIPS::LI<<" "<<MIPS::V0<<" "<<5;
    }
    else {
        assert(c.rst == "char");
        ss<<MIPS::LI<<" "<<MIPS::V0<<" "<<12;
    }
    mips_codes.push_back(ss.str());ss.str("");

    ss<<"syscall";
    mips_codes.push_back(ss.str());ss.str("");

    auto reg = mips_seekReg(c.num1, false);
    ss << MIPS::MOVE<<" "<<reg<<" "<<MIPS::V0;
    mips_codes.push_back(ss.str());
    mips_writeRam(c.num1, reg);
}

void IRListener::MipsPrintf(IRCode& c, std::vector<IRCode>::iterator& o) {
    std::stringstream ss;
    if (c.rst=="int" || c.rst=="char") {
        int val;
        bool is_literal;
        ss<<MIPS::LI<<" "<<MIPS::V0<<" "<<(c.rst=="int"? 1:11);mips_codes.push_back(ss.str());ss.str("");
        is_literal = mips_isLiteral(c.num1, val);
        if (is_literal) {
            ss<<MIPS::LI<<" "<<MIPS::A0<<" "<<val;
        }
        else {
            auto reg = mips_seekReg(c.num1, true);
            ss<<MIPS::MOVE<<" "<<MIPS::A0<<" "<<reg;
            mips_checkRegUse(c.num1, reg, o);
        }
        
    }
    else {
        assert(c.rst == "str");
        ss<<MIPS::LI<<" "<<MIPS::V0<<" "<<4; mips_codes.push_back(ss.str());ss.str("");
        ss<<MIPS::LA<<" "<<MIPS::A0<<" "<<mark2string(c.num1);
    }
    mips_codes.push_back(ss.str());ss.str("");
    ss<<"syscall";mips_codes.push_back(ss.str());ss.str("");

}