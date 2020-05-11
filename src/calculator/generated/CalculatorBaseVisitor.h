
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of CalculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalculatorBaseVisitor : public CalculatorVisitor {
public:

  virtual antlrcpp::Any visitToSetVar(CalculatorParser::ToSetVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCalculate(CalculatorParser::CalculateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariable(CalculatorParser::SetVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToMultOrDiv(CalculatorParser::ToMultOrDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(CalculatorParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(CalculatorParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplication(CalculatorParser::MultiplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivision(CalculatorParser::DivisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToPow(CalculatorParser::ToPowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPower(CalculatorParser::PowerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeSign(CalculatorParser::ChangeSignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToAtom(CalculatorParser::ToAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantPI(CalculatorParser::ConstantPIContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantE(CalculatorParser::ConstantEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDouble(CalculatorParser::DoubleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(CalculatorParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(CalculatorParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraces(CalculatorParser::BracesContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
