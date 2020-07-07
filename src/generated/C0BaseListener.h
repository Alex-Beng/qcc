
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "C0Listener.h"


/**
 * This class provides an empty implementation of C0Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  C0BaseListener : public C0Listener {
public:

  virtual void enterCompilationUnit(C0Parser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(C0Parser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterDefVar(C0Parser::DefVarContext * /*ctx*/) override { }
  virtual void exitDefVar(C0Parser::DefVarContext * /*ctx*/) override { }

  virtual void enterDefConst(C0Parser::DefConstContext * /*ctx*/) override { }
  virtual void exitDefConst(C0Parser::DefConstContext * /*ctx*/) override { }

  virtual void enterDefArray(C0Parser::DefArrayContext * /*ctx*/) override { }
  virtual void exitDefArray(C0Parser::DefArrayContext * /*ctx*/) override { }

  virtual void enterParameter(C0Parser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(C0Parser::ParameterContext * /*ctx*/) override { }

  virtual void enterTypeType(C0Parser::TypeTypeContext * /*ctx*/) override { }
  virtual void exitTypeType(C0Parser::TypeTypeContext * /*ctx*/) override { }

  virtual void enterBlock(C0Parser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(C0Parser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStmt(C0Parser::BlockStmtContext * /*ctx*/) override { }
  virtual void exitBlockStmt(C0Parser::BlockStmtContext * /*ctx*/) override { }

  virtual void enterVarDefStmt(C0Parser::VarDefStmtContext * /*ctx*/) override { }
  virtual void exitVarDefStmt(C0Parser::VarDefStmtContext * /*ctx*/) override { }

  virtual void enterIfStmt(C0Parser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(C0Parser::IfStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(C0Parser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(C0Parser::ForStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(C0Parser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(C0Parser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(C0Parser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(C0Parser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterBreakStmt(C0Parser::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(C0Parser::BreakStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(C0Parser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(C0Parser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterExprStmt(C0Parser::ExprStmtContext * /*ctx*/) override { }
  virtual void exitExprStmt(C0Parser::ExprStmtContext * /*ctx*/) override { }

  virtual void enterBlankStmt(C0Parser::BlankStmtContext * /*ctx*/) override { }
  virtual void exitBlankStmt(C0Parser::BlankStmtContext * /*ctx*/) override { }

  virtual void enterExpressionList(C0Parser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(C0Parser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpr(C0Parser::LogicalOrExprContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpr(C0Parser::LogicalOrExprContext * /*ctx*/) override { }

  virtual void enterPrefixExpr(C0Parser::PrefixExprContext * /*ctx*/) override { }
  virtual void exitPrefixExpr(C0Parser::PrefixExprContext * /*ctx*/) override { }

  virtual void enterPrimaryExpr(C0Parser::PrimaryExprContext * /*ctx*/) override { }
  virtual void exitPrimaryExpr(C0Parser::PrimaryExprContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpr(C0Parser::LogicalAndExprContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpr(C0Parser::LogicalAndExprContext * /*ctx*/) override { }

  virtual void enterFuncallExpr(C0Parser::FuncallExprContext * /*ctx*/) override { }
  virtual void exitFuncallExpr(C0Parser::FuncallExprContext * /*ctx*/) override { }

  virtual void enterArefExpr(C0Parser::ArefExprContext * /*ctx*/) override { }
  virtual void exitArefExpr(C0Parser::ArefExprContext * /*ctx*/) override { }

  virtual void enterBinaryExpr(C0Parser::BinaryExprContext * /*ctx*/) override { }
  virtual void exitBinaryExpr(C0Parser::BinaryExprContext * /*ctx*/) override { }

  virtual void enterAssignExpr(C0Parser::AssignExprContext * /*ctx*/) override { }
  virtual void exitAssignExpr(C0Parser::AssignExprContext * /*ctx*/) override { }

  virtual void enterSubExpr(C0Parser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(C0Parser::SubExprContext * /*ctx*/) override { }

  virtual void enterVariableExpr(C0Parser::VariableExprContext * /*ctx*/) override { }
  virtual void exitVariableExpr(C0Parser::VariableExprContext * /*ctx*/) override { }

  virtual void enterLiteralExpr(C0Parser::LiteralExprContext * /*ctx*/) override { }
  virtual void exitLiteralExpr(C0Parser::LiteralExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

