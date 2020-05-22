
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

  virtual void enterDeclaration(C0Parser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(C0Parser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVar_declaration(C0Parser::Var_declarationContext * /*ctx*/) override { }
  virtual void exitVar_declaration(C0Parser::Var_declarationContext * /*ctx*/) override { }

  virtual void enterTypeID(C0Parser::TypeIDContext * /*ctx*/) override { }
  virtual void exitTypeID(C0Parser::TypeIDContext * /*ctx*/) override { }

  virtual void enterFun_declaration(C0Parser::Fun_declarationContext * /*ctx*/) override { }
  virtual void exitFun_declaration(C0Parser::Fun_declarationContext * /*ctx*/) override { }

  virtual void enterParams(C0Parser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(C0Parser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(C0Parser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(C0Parser::ParamContext * /*ctx*/) override { }

  virtual void enterStatement(C0Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(C0Parser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(C0Parser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(C0Parser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterScanf_statement(C0Parser::Scanf_statementContext * /*ctx*/) override { }
  virtual void exitScanf_statement(C0Parser::Scanf_statementContext * /*ctx*/) override { }

  virtual void enterPrintf_statement(C0Parser::Printf_statementContext * /*ctx*/) override { }
  virtual void exitPrintf_statement(C0Parser::Printf_statementContext * /*ctx*/) override { }

  virtual void enterCompound_statement(C0Parser::Compound_statementContext * /*ctx*/) override { }
  virtual void exitCompound_statement(C0Parser::Compound_statementContext * /*ctx*/) override { }

  virtual void enterLocal_declaration(C0Parser::Local_declarationContext * /*ctx*/) override { }
  virtual void exitLocal_declaration(C0Parser::Local_declarationContext * /*ctx*/) override { }

  virtual void enterIf_statement(C0Parser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(C0Parser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(C0Parser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(C0Parser::While_statementContext * /*ctx*/) override { }

  virtual void enterFor_statement(C0Parser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(C0Parser::For_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(C0Parser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(C0Parser::Return_statementContext * /*ctx*/) override { }

  virtual void enterBreak_statement(C0Parser::Break_statementContext * /*ctx*/) override { }
  virtual void exitBreak_statement(C0Parser::Break_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(C0Parser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(C0Parser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterExpression(C0Parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(C0Parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterArgs(C0Parser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(C0Parser::ArgsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

