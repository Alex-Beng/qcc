
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "C0Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by C0Parser.
 */
class  C0Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(C0Parser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(C0Parser::CompilationUnitContext *ctx) = 0;

  virtual void enterFunctionDefinition(C0Parser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(C0Parser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterDefVar(C0Parser::DefVarContext *ctx) = 0;
  virtual void exitDefVar(C0Parser::DefVarContext *ctx) = 0;

  virtual void enterDefConst(C0Parser::DefConstContext *ctx) = 0;
  virtual void exitDefConst(C0Parser::DefConstContext *ctx) = 0;

  virtual void enterDefArray(C0Parser::DefArrayContext *ctx) = 0;
  virtual void exitDefArray(C0Parser::DefArrayContext *ctx) = 0;

  virtual void enterParameter(C0Parser::ParameterContext *ctx) = 0;
  virtual void exitParameter(C0Parser::ParameterContext *ctx) = 0;

  virtual void enterTypeType(C0Parser::TypeTypeContext *ctx) = 0;
  virtual void exitTypeType(C0Parser::TypeTypeContext *ctx) = 0;

  virtual void enterBlock(C0Parser::BlockContext *ctx) = 0;
  virtual void exitBlock(C0Parser::BlockContext *ctx) = 0;

  virtual void enterBlockStmt(C0Parser::BlockStmtContext *ctx) = 0;
  virtual void exitBlockStmt(C0Parser::BlockStmtContext *ctx) = 0;

  virtual void enterVarDefStmt(C0Parser::VarDefStmtContext *ctx) = 0;
  virtual void exitVarDefStmt(C0Parser::VarDefStmtContext *ctx) = 0;

  virtual void enterIfStmt(C0Parser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(C0Parser::IfStmtContext *ctx) = 0;

  virtual void enterForStmt(C0Parser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(C0Parser::ForStmtContext *ctx) = 0;

  virtual void enterWhileStmt(C0Parser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(C0Parser::WhileStmtContext *ctx) = 0;

  virtual void enterReturnStmt(C0Parser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(C0Parser::ReturnStmtContext *ctx) = 0;

  virtual void enterBreakStmt(C0Parser::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(C0Parser::BreakStmtContext *ctx) = 0;

  virtual void enterContinueStmt(C0Parser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(C0Parser::ContinueStmtContext *ctx) = 0;

  virtual void enterExprStmt(C0Parser::ExprStmtContext *ctx) = 0;
  virtual void exitExprStmt(C0Parser::ExprStmtContext *ctx) = 0;

  virtual void enterBlankStmt(C0Parser::BlankStmtContext *ctx) = 0;
  virtual void exitBlankStmt(C0Parser::BlankStmtContext *ctx) = 0;

  virtual void enterIfCondition(C0Parser::IfConditionContext *ctx) = 0;
  virtual void exitIfCondition(C0Parser::IfConditionContext *ctx) = 0;

  virtual void enterIfStatement(C0Parser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(C0Parser::IfStatementContext *ctx) = 0;

  virtual void enterElseStatement(C0Parser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(C0Parser::ElseStatementContext *ctx) = 0;

  virtual void enterWhileCondition(C0Parser::WhileConditionContext *ctx) = 0;
  virtual void exitWhileCondition(C0Parser::WhileConditionContext *ctx) = 0;

  virtual void enterWhileStatement(C0Parser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(C0Parser::WhileStatementContext *ctx) = 0;

  virtual void enterForCondition(C0Parser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(C0Parser::ForConditionContext *ctx) = 0;

  virtual void enterForStep(C0Parser::ForStepContext *ctx) = 0;
  virtual void exitForStep(C0Parser::ForStepContext *ctx) = 0;

  virtual void enterExpressionList(C0Parser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(C0Parser::ExpressionListContext *ctx) = 0;

  virtual void enterPrefixExpr(C0Parser::PrefixExprContext *ctx) = 0;
  virtual void exitPrefixExpr(C0Parser::PrefixExprContext *ctx) = 0;

  virtual void enterPrimaryExpr(C0Parser::PrimaryExprContext *ctx) = 0;
  virtual void exitPrimaryExpr(C0Parser::PrimaryExprContext *ctx) = 0;

  virtual void enterFuncallExpr(C0Parser::FuncallExprContext *ctx) = 0;
  virtual void exitFuncallExpr(C0Parser::FuncallExprContext *ctx) = 0;

  virtual void enterArefExpr(C0Parser::ArefExprContext *ctx) = 0;
  virtual void exitArefExpr(C0Parser::ArefExprContext *ctx) = 0;

  virtual void enterBinaryExpr(C0Parser::BinaryExprContext *ctx) = 0;
  virtual void exitBinaryExpr(C0Parser::BinaryExprContext *ctx) = 0;

  virtual void enterPrintfExpr(C0Parser::PrintfExprContext *ctx) = 0;
  virtual void exitPrintfExpr(C0Parser::PrintfExprContext *ctx) = 0;

  virtual void enterScanfExpr(C0Parser::ScanfExprContext *ctx) = 0;
  virtual void exitScanfExpr(C0Parser::ScanfExprContext *ctx) = 0;

  virtual void enterAssignExpr(C0Parser::AssignExprContext *ctx) = 0;
  virtual void exitAssignExpr(C0Parser::AssignExprContext *ctx) = 0;

  virtual void enterSubExpr(C0Parser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(C0Parser::SubExprContext *ctx) = 0;

  virtual void enterVariableExpr(C0Parser::VariableExprContext *ctx) = 0;
  virtual void exitVariableExpr(C0Parser::VariableExprContext *ctx) = 0;

  virtual void enterLiteralExpr(C0Parser::LiteralExprContext *ctx) = 0;
  virtual void exitLiteralExpr(C0Parser::LiteralExprContext *ctx) = 0;


};

