
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalculatorParser.
 */
class  CalculatorListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(CalculatorParser::ProgContext *ctx) = 0;
  virtual void exitProg(CalculatorParser::ProgContext *ctx) = 0;

  virtual void enterPrintExpr(CalculatorParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(CalculatorParser::PrintExprContext *ctx) = 0;

  virtual void enterAssign(CalculatorParser::AssignContext *ctx) = 0;
  virtual void exitAssign(CalculatorParser::AssignContext *ctx) = 0;

  virtual void enterBlank(CalculatorParser::BlankContext *ctx) = 0;
  virtual void exitBlank(CalculatorParser::BlankContext *ctx) = 0;

  virtual void enterParens(CalculatorParser::ParensContext *ctx) = 0;
  virtual void exitParens(CalculatorParser::ParensContext *ctx) = 0;

  virtual void enterMulDiv(CalculatorParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(CalculatorParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(CalculatorParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(CalculatorParser::AddSubContext *ctx) = 0;

  virtual void enterId(CalculatorParser::IdContext *ctx) = 0;
  virtual void exitId(CalculatorParser::IdContext *ctx) = 0;

  virtual void enterInt(CalculatorParser::IntContext *ctx) = 0;
  virtual void exitInt(CalculatorParser::IntContext *ctx) = 0;

  virtual void enterPower(CalculatorParser::PowerContext *ctx) = 0;
  virtual void exitPower(CalculatorParser::PowerContext *ctx) = 0;


};

