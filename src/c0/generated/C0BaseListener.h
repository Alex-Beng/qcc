
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

  virtual void enterProgram(C0Parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(C0Parser::ProgramContext * /*ctx*/) override { }

  virtual void enterDecl(C0Parser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(C0Parser::DeclContext * /*ctx*/) override { }

  virtual void enterVar_decl(C0Parser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(C0Parser::Var_declContext * /*ctx*/) override { }

  virtual void enterType_spec(C0Parser::Type_specContext * /*ctx*/) override { }
  virtual void exitType_spec(C0Parser::Type_specContext * /*ctx*/) override { }

  virtual void enterFun_decl(C0Parser::Fun_declContext * /*ctx*/) override { }
  virtual void exitFun_decl(C0Parser::Fun_declContext * /*ctx*/) override { }

  virtual void enterParams(C0Parser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(C0Parser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(C0Parser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(C0Parser::ParamContext * /*ctx*/) override { }

  virtual void enterStmt(C0Parser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(C0Parser::StmtContext * /*ctx*/) override { }

  virtual void enterExpr_stmt(C0Parser::Expr_stmtContext * /*ctx*/) override { }
  virtual void exitExpr_stmt(C0Parser::Expr_stmtContext * /*ctx*/) override { }

  virtual void enterWhile_stmt(C0Parser::While_stmtContext * /*ctx*/) override { }
  virtual void exitWhile_stmt(C0Parser::While_stmtContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(C0Parser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(C0Parser::Compound_stmtContext * /*ctx*/) override { }

  virtual void enterLocal_decl(C0Parser::Local_declContext * /*ctx*/) override { }
  virtual void exitLocal_decl(C0Parser::Local_declContext * /*ctx*/) override { }

  virtual void enterIf_stmt(C0Parser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(C0Parser::If_stmtContext * /*ctx*/) override { }

  virtual void enterReturn_stmt(C0Parser::Return_stmtContext * /*ctx*/) override { }
  virtual void exitReturn_stmt(C0Parser::Return_stmtContext * /*ctx*/) override { }

  virtual void enterBreak_stmt(C0Parser::Break_stmtContext * /*ctx*/) override { }
  virtual void exitBreak_stmt(C0Parser::Break_stmtContext * /*ctx*/) override { }

  virtual void enterContinue_stmt(C0Parser::Continue_stmtContext * /*ctx*/) override { }
  virtual void exitContinue_stmt(C0Parser::Continue_stmtContext * /*ctx*/) override { }

  virtual void enterExpr(C0Parser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(C0Parser::ExprContext * /*ctx*/) override { }

  virtual void enterArgs(C0Parser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(C0Parser::ArgsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

