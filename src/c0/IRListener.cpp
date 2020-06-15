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
    else {
        rt_type_int = CLS_CHAR;
    }

    // add to sym table
    if (sym_table.lookup(curr_func, func_name, true) == nullptr) {
        sym_table.addSym(curr_func, func_name, rt_type_int, TYPE_FUNC, 0, ctx->getStart()->getLine());
    }
    this->curr_func = func_name;
}
void IRListener::exitFunctionDefinition(C0Parser::FunctionDefinitionContext* ctx) {
#ifdef DEBUG
    printf("leaving func %s \n", this->curr_func.c_str());
#endif
    this->curr_func = "";
}


void IRListener::enterParameter(C0Parser::ParameterContext * ctx) {
    std::string param_name = ctx->typeType()->getText();
    printf(param_name.c_str());
}
void IRListener::exitParameter(C0Parser::ParameterContext * ctx) {

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

    // get lhs
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
void IRListener::exitDefConst(C0Parser::DefConstContext * /*ctx*/) {

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
void IRListener::exitDefVar(C0Parser::DefVarContext * ctx) {

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

}
void IRListener::exitDefArray(C0Parser::DefArrayContext * ctx) {

}

