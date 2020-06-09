
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorVisitor.h"


/**
 * This class provides an empty implementation of CalculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalculatorBaseVisitor : public CalculatorVisitor {
public:

  virtual antlrcpp::Any visitProg(CalculatorParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(CalculatorParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(CalculatorParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(CalculatorParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParens(CalculatorParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDiv(CalculatorParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSub(CalculatorParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(CalculatorParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(CalculatorParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPower(CalculatorParser::PowerContext *ctx) override {
    return visitChildren(ctx);
  }


};

