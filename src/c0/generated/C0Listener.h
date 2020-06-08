
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

  virtual void enterVariableDefinition(C0Parser::VariableDefinitionContext *ctx) = 0;
  virtual void exitVariableDefinition(C0Parser::VariableDefinitionContext *ctx) = 0;

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

  virtual void enterExpressionList(C0Parser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(C0Parser::ExpressionListContext *ctx) = 0;

  virtual void enterLogicalOrExpr(C0Parser::LogicalOrExprContext *ctx) = 0;
  virtual void exitLogicalOrExpr(C0Parser::LogicalOrExprContext *ctx) = 0;

  virtual void enterPrefixExpr(C0Parser::PrefixExprContext *ctx) = 0;
  virtual void exitPrefixExpr(C0Parser::PrefixExprContext *ctx) = 0;

  virtual void enterPrimaryExpr(C0Parser::PrimaryExprContext *ctx) = 0;
  virtual void exitPrimaryExpr(C0Parser::PrimaryExprContext *ctx) = 0;

  virtual void enterLogicalAndExpr(C0Parser::LogicalAndExprContext *ctx) = 0;
  virtual void exitLogicalAndExpr(C0Parser::LogicalAndExprContext *ctx) = 0;

  virtual void enterFuncallExpr(C0Parser::FuncallExprContext *ctx) = 0;
  virtual void exitFuncallExpr(C0Parser::FuncallExprContext *ctx) = 0;

  virtual void enterArefExpr(C0Parser::ArefExprContext *ctx) = 0;
  virtual void exitArefExpr(C0Parser::ArefExprContext *ctx) = 0;

  virtual void enterSuffixExpr(C0Parser::SuffixExprContext *ctx) = 0;
  virtual void exitSuffixExpr(C0Parser::SuffixExprContext *ctx) = 0;

  virtual void enterBinaryExpr(C0Parser::BinaryExprContext *ctx) = 0;
  virtual void exitBinaryExpr(C0Parser::BinaryExprContext *ctx) = 0;

  virtual void enterAssignExpr(C0Parser::AssignExprContext *ctx) = 0;
  virtual void exitAssignExpr(C0Parser::AssignExprContext *ctx) = 0;

  virtual void enterSubExpr(C0Parser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(C0Parser::SubExprContext *ctx) = 0;

  virtual void enterVariableExpr(C0Parser::VariableExprContext *ctx) = 0;
  virtual void exitVariableExpr(C0Parser::VariableExprContext *ctx) = 0;

  virtual void enterLiteralExpr(C0Parser::LiteralExprContext *ctx) = 0;
  virtual void exitLiteralExpr(C0Parser::LiteralExprContext *ctx) = 0;

  virtual void enterDecIntegerConst(C0Parser::DecIntegerConstContext *ctx) = 0;
  virtual void exitDecIntegerConst(C0Parser::DecIntegerConstContext *ctx) = 0;

  virtual void enterCharConst(C0Parser::CharConstContext *ctx) = 0;
  virtual void exitCharConst(C0Parser::CharConstContext *ctx) = 0;

  virtual void enterStringConst(C0Parser::StringConstContext *ctx) = 0;
  virtual void exitStringConst(C0Parser::StringConstContext *ctx) = 0;


};

