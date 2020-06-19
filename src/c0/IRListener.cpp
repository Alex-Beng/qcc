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
    }

}
void IRListener::exitFunctionDefinition(C0Parser::FunctionDefinitionContext* ctx) {
#ifdef DEBUG
    printf("leaving func %s \n", this->curr_func.c_str());
#endif
    ir.addIMC(curr_func, OP::FUNC_END, "0", "0");
    this->curr_func = "";
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
    if (ctx->lhs->getType() == C0Lexer::DecimalInteger) {
        var_val = std::stoi(ctx->DecimalInteger()->getText());
    }
    else if(ctx->lhs->getType() == C0Lexer::CharLiteral) {
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
        throw std::runtime_error("const must have LHS expression at line: "+std::to_string(ctx->getStart()->getLine()));
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
    
    if (array_len == 0) {
        throw std::runtime_error("unexpect array len 0 at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    if (sym_table.lookup(curr_func, var_name, true) == nullptr)
        sym_table.addSym(curr_func, var_name, var_cls, var_type, array_len, ctx->getStart()->getLine());
    else {
        throw std::runtime_error("multi defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }

}

void IRListener::exitAssignExpr(C0Parser::AssignExprContext * ctx) {
    // auto t_lhs = temp_var.get(ctx->expression()[0]);
    // auto t_lhs_idx = temp_idx.get(ctx->expression()[0]);
    // std::cout<<t_lhs<<' '<<t_lhs_idx<<'\n';


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
            auto t_v = ir.gen_temp(curr_func, ctx->getStop()->getLine(), CLS_INT, sym_table);
            auto t_idx = temp_idx.get(ctx->expression()[1]);
            ir.addIMC(t_v, OP::READ_ARR, rhs, t_idx);
            rhs = t_v;
        }
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
    auto child_var = temp_var.get(ctx->children[0]);
    // std::cout<<ctx->getText()<<child_var<<'\n';
    temp_var.put(ctx, child_var);
}

void IRListener::exitLiteralExpr(C0Parser::LiteralExprContext * ctx) {
    if (ctx->lite->getType() == C0Lexer::DecimalInteger) {
        temp_var.put(ctx, ctx->DecimalInteger()->getText());
    }
    else if (ctx->lite->getType() == C0Lexer::CharLiteral) {
        int var_val = ctx->CharLiteral()->getText()[1];
        temp_var.put(ctx, std::to_string(var_val));
    }
    else if (ctx->lite->getType() == C0Lexer::StringLiteral){
        // add to sym table
        std::string ts = ctx->StringLiteral()->getText();
        int str_idx = sym_table.addStr(ts);
        temp_var.put(ctx, "*"+std::to_string(str_idx));
    }
}

void IRListener::exitVariableExpr(C0Parser::VariableExprContext * ctx) {
    std::string var_name = ctx->Identifier()->getText();
    
    auto t_varinfo = sym_table.lookup(curr_func, var_name, false);
    if (t_varinfo == nullptr) {
        throw std::runtime_error("can't find defination of "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    if (t_varinfo->type == TYPE_CONST) {
        temp_var.put(ctx, std::to_string(t_varinfo->length));
    }
    else if (t_varinfo->type == TYPE_PARAM || t_varinfo->type == TYPE_VAR) {
        temp_var.put(ctx, t_varinfo->name);
    }
    else if (t_varinfo->type == TYPE_ARRAY) {
        temp_var.put(ctx, t_varinfo->name);
    }
    else {
        throw std::runtime_error("invalid identifier "+ctx->Identifier()->getText()+" at line: "+std::to_string(ctx->getStart()->getLine()));
    }
}

void IRListener::exitBinaryExpr(C0Parser::BinaryExprContext * ctx) {
    // check lhs (must be iden)
    // auto lhs = ctx->expression()[0];
    auto lhs = temp_var.get(ctx->expression()[0]);
    auto lhs_varinfo = sym_table.lookup(curr_func, lhs, false);

    auto rhs = temp_var.get(ctx->expression()[1]);
    auto rhs_varinfo = sym_table.lookup(curr_func, rhs, false);

    std::cout<<lhs<<' '<<rhs<<'\n';

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

    int cls = CLS_INT;
    auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), cls, sym_table);

    temp_var.put(ctx, t_v);
    auto op = ctx->op->getText();
    //　我滴老天鹅，你g4白写了？
    // if (
    //     op == "*" ||
    //     op == "/" ||
    //     op == "%" ||
    //     op == "+" ||
    //     op == "-" ||
    //     op == "<<" ||
    //     op == ">>" ||
    //     op == "<" ||
    //     op == ">" ||
    //     op == ">=" ||
    //     op == "<=" ||
    //     op == "==" ||
    //     op == "!=" ||
    //     op == "&" ||
    //     op == "^" ||
    //     op == "|" 
    // ) {
        ir.addIMC(t_v, op, lhs, rhs);
    // }

}

void IRListener::exitPrefixExpr(C0Parser::PrefixExprContext * ctx) {
    auto object = temp_var.get(ctx->expression());
    auto t_varinfo = sym_table.lookup(curr_func, object, false);

    auto op = ctx->op->getText();

    if (t_varinfo->type == TYPE_ARRAY) {
        auto t_idx = temp_idx.get(ctx->expression());
        auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);

        ir.addIMC(t_v, OP::READ_ARR, t_varinfo->name, t_idx);
        object = t_v;
    }

    temp_var.put(ctx, object);

    

    if (op == "++") {
        ir.addIMC(object, OP::ADD, object, "1");
    }
    else if (op == "--") {
        ir.addIMC(object, OP::SUB, object, "1");
    }
    else if (op == "+") {
        ;
    }
    else if (op == "-") {
        ir.addIMC(object, OP::SUB, "0", object);
    }
    else if (op == "~") {// 按位取反==(11...11) xor object
        ir.addIMC(object, OP::BXOR, "-1", object);
    }
    else if (op == "!") {
        ir.addIMC(object, OP::EQU, "0", object);
    }
}

void IRListener::exitSubExpr(C0Parser::SubExprContext * ctx) {
    auto t_v = temp_var.get(ctx->expression());
    auto t_idx = temp_idx.get(ctx->expression());
    temp_var.put(ctx, t_v);
    temp_idx.put(ctx, t_idx);
}

void IRListener::exitArefExpr(C0Parser::ArefExprContext * ctx) {
    std::string array_name = ctx->expression()[0]->getText();
    auto t_varinfo = sym_table.lookup(curr_func, array_name, false);
    if (t_varinfo->type != TYPE_ARRAY) {
        throw std::runtime_error("expect array type at line: "+std::to_string(ctx->getStart()->getLine()));
    }

    auto array_idx = temp_var.get(ctx->expression()[1]);
    // std::cout<<array_idx<<'\n';
    auto tt_varinfo = sym_table.lookup(curr_func, array_idx, false);
    // 如果遇到嵌套，先求值
    if (tt_varinfo && tt_varinfo->type == TYPE_ARRAY) {
        auto t_idx = temp_idx.get(ctx->expression()[1]);
        auto t_v = ir.gen_temp(curr_func, ctx->getStart()->getLine(), CLS_INT, sym_table);
        ir.addIMC(t_v, OP::READ_ARR, array_idx, t_idx);
        array_idx = t_v;
    }    

    temp_var.put(ctx, array_name);
    temp_idx.put(ctx, array_idx);
}