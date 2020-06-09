
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorListener.h"


/**
 * This class provides an empty implementation of CalculatorListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalculatorBaseListener : public CalculatorListener {
public:

  virtual void enterProg(CalculatorParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(CalculatorParser::ProgContext * /*ctx*/) override { }

  virtual void enterPrintExpr(CalculatorParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(CalculatorParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterAssign(CalculatorParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(CalculatorParser::AssignContext * /*ctx*/) override { }

  virtual void enterBlank(CalculatorParser::BlankContext * /*ctx*/) override { }
  virtual void exitBlank(CalculatorParser::BlankContext * /*ctx*/) override { }

  virtual void enterParens(CalculatorParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(CalculatorParser::ParensContext * /*ctx*/) override { }

  virtual void enterMulDiv(CalculatorParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(CalculatorParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(CalculatorParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(CalculatorParser::AddSubContext * /*ctx*/) override { }

  virtual void enterId(CalculatorParser::IdContext * /*ctx*/) override { }
  virtual void exitId(CalculatorParser::IdContext * /*ctx*/) override { }

  virtual void enterInt(CalculatorParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(CalculatorParser::IntContext * /*ctx*/) override { }

  virtual void enterPower(CalculatorParser::PowerContext * /*ctx*/) override { }
  virtual void exitPower(CalculatorParser::PowerContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

