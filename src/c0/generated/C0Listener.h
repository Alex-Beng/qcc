
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "C0Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by C0Parser.
 */
class  C0Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(C0Parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(C0Parser::ProgramContext *ctx) = 0;

  virtual void enterDeclaration(C0Parser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(C0Parser::DeclarationContext *ctx) = 0;

  virtual void enterVar_declaration(C0Parser::Var_declarationContext *ctx) = 0;
  virtual void exitVar_declaration(C0Parser::Var_declarationContext *ctx) = 0;

  virtual void enterTypeID(C0Parser::TypeIDContext *ctx) = 0;
  virtual void exitTypeID(C0Parser::TypeIDContext *ctx) = 0;

  virtual void enterFun_declaration(C0Parser::Fun_declarationContext *ctx) = 0;
  virtual void exitFun_declaration(C0Parser::Fun_declarationContext *ctx) = 0;

  virtual void enterParams(C0Parser::ParamsContext *ctx) = 0;
  virtual void exitParams(C0Parser::ParamsContext *ctx) = 0;

  virtual void enterParam(C0Parser::ParamContext *ctx) = 0;
  virtual void exitParam(C0Parser::ParamContext *ctx) = 0;

  virtual void enterStatement(C0Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(C0Parser::StatementContext *ctx) = 0;

  virtual void enterExpression_statement(C0Parser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(C0Parser::Expression_statementContext *ctx) = 0;

  virtual void enterScanf_statement(C0Parser::Scanf_statementContext *ctx) = 0;
  virtual void exitScanf_statement(C0Parser::Scanf_statementContext *ctx) = 0;

  virtual void enterPrintf_statement(C0Parser::Printf_statementContext *ctx) = 0;
  virtual void exitPrintf_statement(C0Parser::Printf_statementContext *ctx) = 0;

  virtual void enterCompound_statement(C0Parser::Compound_statementContext *ctx) = 0;
  virtual void exitCompound_statement(C0Parser::Compound_statementContext *ctx) = 0;

  virtual void enterLocal_declaration(C0Parser::Local_declarationContext *ctx) = 0;
  virtual void exitLocal_declaration(C0Parser::Local_declarationContext *ctx) = 0;

  virtual void enterIf_statement(C0Parser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(C0Parser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(C0Parser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(C0Parser::While_statementContext *ctx) = 0;

  virtual void enterFor_statement(C0Parser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(C0Parser::For_statementContext *ctx) = 0;

  virtual void enterReturn_statement(C0Parser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(C0Parser::Return_statementContext *ctx) = 0;

  virtual void enterBreak_statement(C0Parser::Break_statementContext *ctx) = 0;
  virtual void exitBreak_statement(C0Parser::Break_statementContext *ctx) = 0;

  virtual void enterContinue_statement(C0Parser::Continue_statementContext *ctx) = 0;
  virtual void exitContinue_statement(C0Parser::Continue_statementContext *ctx) = 0;

  virtual void enterExpression(C0Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(C0Parser::ExpressionContext *ctx) = 0;

  virtual void enterArgs(C0Parser::ArgsContext *ctx) = 0;
  virtual void exitArgs(C0Parser::ArgsContext *ctx) = 0;


};

