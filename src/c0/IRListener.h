#ifndef IRLISTENER_H
#define IRLISTENER_H

#include "common_headers.h"

#include "generated/C0BaseListener.h"

#include "SymTable.h"
#include "IR.h"


class IRListener : public C0BaseListener {
public:
	SymbolTable sym_table;
	IR ir;

	// 当前所在的func, ""为global
	std::string curr_func;
	
	// 递归求表达式值时，每一节点临时变量
	antlr4::tree::ParseTreeProperty<std::string> temp_var;

	// 临时变量为array时的idx
	antlr4::tree::ParseTreeProperty<std::string> temp_idx;

public:
	IRListener() {
		curr_func = "";
		sym_table.addSym("", "true", CLS_INT, TYPE_CONST, 1, 0);
		sym_table.addSym("", "false", CLS_INT, TYPE_CONST, 0, 0);
	}
	
    void enterFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);
    void exitFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);
	
	void enterDefConst(C0Parser::DefConstContext * /*ctx*/);

	void enterDefVar(C0Parser::DefVarContext * /*ctx*/);
	
	void enterDefArray(C0Parser::DefArrayContext * /*ctx*/);


	void exitPrimaryExpr(C0Parser::PrimaryExprContext * /*ctx*/);

  	void exitSubExpr(C0Parser::SubExprContext * /*ctx*/);

  	void exitVariableExpr(C0Parser::VariableExprContext * /*ctx*/);

	void exitLiteralExpr(C0Parser::LiteralExprContext * /*ctx*/);

	void exitArefExpr(C0Parser::ArefExprContext * /*ctx*/);

	void exitPrefixExpr(C0Parser::PrefixExprContext * /*ctx*/);
	  
	void exitBinaryExpr(C0Parser::BinaryExprContext * /*ctx*/);

  	void exitAssignExpr(C0Parser::AssignExprContext * /*ctx*/);

};


#endif