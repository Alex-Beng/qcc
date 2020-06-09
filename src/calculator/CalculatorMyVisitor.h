#ifndef MY_VISITOR_H
#define MY_VISITOR_H
#include <math.h>

#include <map>
#include <sstream>

#include <antlr4-runtime/antlr4-runtime.h>
#include <antlr4-runtime/support/Any.h>
#include "generated/CalculatorParser.h"
#include "generated/CalculatorBaseVisitor.h"


using namespace antlrcpp;

class CalculatorMyVisitor : public CalculatorBaseVisitor {
private:
    std::map<std::string, double> memory;
public:
    antlrcpp::Any visitAssign(CalculatorParser::AssignContext *ctx)  {
        std::string id = ctx->ID()->getText();
        double value = visit((antlr4::tree::ParseTree*)ctx->expr());

        memory[id] = value;
        return value;
    }
    antlrcpp::Any visitPrintExpr(CalculatorParser::PrintExprContext *ctx)  {
        double value = visit(ctx->expr());
        cout<<value<<endl;
        return 0;
    }
    antlrcpp::Any visitInt(CalculatorParser::IntContext *ctx)  {
        return std::stod(ctx->INT()->getText());
    }
    antlrcpp::Any visitId(CalculatorParser::IdContext *ctx)  {
        std::string id = ctx->ID()->getText();
        auto item = memory.find(id);
        if (item == memory.end()) 
            return 0;
        else 
            return memory[id];
    }
    antlrcpp::Any visitPower(CalculatorParser::PowerContext *ctx)  {
        double left = visit(ctx->expr(0));
        double right = visit(ctx->expr(1));
        return pow(left, right);
    }
    antlrcpp::Any visitMulDiv(CalculatorParser::MulDivContext *ctx)  {
        double left = visit(ctx->expr(0));
        double right = visit(ctx->expr(1));
        if (ctx->op->getText() == "*") {
            return left*right;
        }
        else {
            return left/right;
        }
    }
    antlrcpp::Any visitAddSub(CalculatorParser::AddSubContext *ctx)  {
        double left = visit(ctx->expr(0));
        double right = visit(ctx->expr(1));
        if (ctx->op->getText() == "+") {
            return left+right;
        }
        else {
            return left-right;
        }

    }
    antlrcpp::Any visitParens(CalculatorParser::ParensContext *ctx)  {
        return visit(ctx->expr());
    }

};
#endif