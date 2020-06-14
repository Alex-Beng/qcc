#include "debug.h"
#include "IRListener.h"

#include <antlr4-runtime/antlr4-runtime.h>

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
void IRListener::exitParameter(C0Parser::ParameterContext * /*ctx*/) {

}
