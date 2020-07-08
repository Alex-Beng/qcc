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
	// 在函数定义中
	std::string curr_func;
	bool in_func;
	
	// 每一节点临时变量类型和名字
	antlr4::tree::ParseTreeProperty<int> temp_cls;
	antlr4::tree::ParseTreeProperty<std::string> temp_var;

	// 临时变量为array时的idx
	antlr4::tree::ParseTreeProperty<std::string> temp_idx;

	// if语句用到的label
	antlr4::tree::ParseTreeProperty<std::vector<std::string>> if_labels;

	// while语句用到的label
	antlr4::tree::ParseTreeProperty<std::vector<std::string>> while_labels;

public:
	IRListener() {
		curr_func = "";
		in_func = false;

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

	void enterIfStmt(C0Parser::IfStmtContext * /*ctx*/);
  	void exitIfStmt(C0Parser::IfStmtContext * /*ctx*/);

  	void exitIfCondition(C0Parser::IfConditionContext * /*ctx*/);

	void enterElseStatement(C0Parser::ElseStatementContext * /*ctx*/);

  	void enterWhileStmt(C0Parser::WhileStmtContext * /*ctx*/);
  	void exitWhileStmt(C0Parser::WhileStmtContext * /*ctx*/);

	void exitWhileCondition(C0Parser::WhileConditionContext * /*ctx*/);

};


#endif