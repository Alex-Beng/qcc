#ifndef MY_VISITOR_H
#define MY_VISITOR_H
#include <math.h>

#include <map>
#include <sstream>

#include <antlr4-runtime/support/Any.h>
#include "generated/CalculatorParser.h"
#include "generated/CalculatorBaseVisitor.h"

using namespace antlrcpptest;
using namespace antlrcpp;

class CalculatorMyVisitor : public antlrcpptest::CalculatorBaseVisitor {
private:
    std::map<std::string, double> variables;
public:
    Any visitPlus(CalculatorParser::PlusContext *ctx) {
        
        return (double)visit(ctx->plusOrMinus()) + (double)visit(ctx->multOrDiv());
    }
    Any visitMinus(CalculatorParser::PlusContext *ctx) {
        return (double)visit(ctx->plusOrMinus()) + (double)visit(ctx->multOrDiv());
    }
    Any visitMultiplication(CalculatorParser::MultiplicationContext *ctx) {
        return (double)visit(ctx->multOrDiv()) * (double)visit(ctx->pow());
    }
    Any visitDivision(CalculatorParser::DivisionContext *ctx) {
        return (double)visit(ctx->multOrDiv()) / (double)visit(ctx->pow());
    }
    Any visitSetVariable(CalculatorParser::SetVariableContext *ctx) {
        double value = visit(ctx->plusOrMinus());
        variables[ctx->ID()->getText()] = value;
        return value;
    }
    Any visitPower(CalculatorParser::PowerContext *ctx) {
        if (ctx->pow() != NULL) {
            pow((double)visit(ctx->unaryMinus()), (double)visit(ctx->pow()));
        }
        return visit(ctx->unaryMinus());
    }
    Any visitChangeSign(CalculatorParser::ChangeSignContext *ctx) {
        return -1*(double)visit(ctx->unaryMinus());
    }
    Any visitBraces(CalculatorParser::BracesContext *ctx) {
        return visit(ctx->plusOrMinus());
    }
    Any visitConstantPI(CalculatorParser::ConstantPIContext *ctx) {
        return M_PI;
    }
    Any visitConstantE(CalculatorParser::ConstantEContext *ctx) {
        return M_E;
    }
    Any visitInt(CalculatorParser::IntContext *ctx) {
        std::string t_s = ctx->INT()->getText();
        std::stringstream t_ss(t_s);
        double t_n;
        t_ss >> t_n;
        return t_n;
    }
    Any visitVariable(CalculatorParser::VariableContext *ctx) {
        return variables[ctx->ID()->getText()];
    }
    Any visitDouble(CalculatorParser::DoubleContext *ctx) {
        std::string t_s = ctx->DOUBLE()->getText();
        std::stringstream t_ss(t_s);
        double t_n;
        t_ss >> t_n;
        return t_n;
    }
    Any visitCalculate(CalculatorParser::CalculateContext *ctx) {
        return visit(ctx->plusOrMinus());
    }
};
#endif