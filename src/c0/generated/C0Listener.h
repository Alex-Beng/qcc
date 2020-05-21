
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

  virtual void enterDecl(C0Parser::DeclContext *ctx) = 0;
  virtual void exitDecl(C0Parser::DeclContext *ctx) = 0;

  virtual void enterVar_decl(C0Parser::Var_declContext *ctx) = 0;
  virtual void exitVar_decl(C0Parser::Var_declContext *ctx) = 0;

  virtual void enterType_spec(C0Parser::Type_specContext *ctx) = 0;
  virtual void exitType_spec(C0Parser::Type_specContext *ctx) = 0;

  virtual void enterFun_decl(C0Parser::Fun_declContext *ctx) = 0;
  virtual void exitFun_decl(C0Parser::Fun_declContext *ctx) = 0;

  virtual void enterParams(C0Parser::ParamsContext *ctx) = 0;
  virtual void exitParams(C0Parser::ParamsContext *ctx) = 0;

  virtual void enterParam(C0Parser::ParamContext *ctx) = 0;
  virtual void exitParam(C0Parser::ParamContext *ctx) = 0;

  virtual void enterStmt(C0Parser::StmtContext *ctx) = 0;
  virtual void exitStmt(C0Parser::StmtContext *ctx) = 0;

  virtual void enterExpr_stmt(C0Parser::Expr_stmtContext *ctx) = 0;
  virtual void exitExpr_stmt(C0Parser::Expr_stmtContext *ctx) = 0;

  virtual void enterWhile_stmt(C0Parser::While_stmtContext *ctx) = 0;
  virtual void exitWhile_stmt(C0Parser::While_stmtContext *ctx) = 0;

  virtual void enterCompound_stmt(C0Parser::Compound_stmtContext *ctx) = 0;
  virtual void exitCompound_stmt(C0Parser::Compound_stmtContext *ctx) = 0;

  virtual void enterLocal_decl(C0Parser::Local_declContext *ctx) = 0;
  virtual void exitLocal_decl(C0Parser::Local_declContext *ctx) = 0;

  virtual void enterIf_stmt(C0Parser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(C0Parser::If_stmtContext *ctx) = 0;

  virtual void enterReturn_stmt(C0Parser::Return_stmtContext *ctx) = 0;
  virtual void exitReturn_stmt(C0Parser::Return_stmtContext *ctx) = 0;

  virtual void enterBreak_stmt(C0Parser::Break_stmtContext *ctx) = 0;
  virtual void exitBreak_stmt(C0Parser::Break_stmtContext *ctx) = 0;

  virtual void enterContinue_stmt(C0Parser::Continue_stmtContext *ctx) = 0;
  virtual void exitContinue_stmt(C0Parser::Continue_stmtContext *ctx) = 0;

  virtual void enterExpr(C0Parser::ExprContext *ctx) = 0;
  virtual void exitExpr(C0Parser::ExprContext *ctx) = 0;

  virtual void enterArgs(C0Parser::ArgsContext *ctx) = 0;
  virtual void exitArgs(C0Parser::ArgsContext *ctx) = 0;


};

