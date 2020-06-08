
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "C0Visitor.h"


/**
 * This class provides an empty implementation of C0Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  C0BaseVisitor : public C0Visitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(C0Parser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(C0Parser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDefinition(C0Parser::VariableDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(C0Parser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeType(C0Parser::TypeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(C0Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStmt(C0Parser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDefStmt(C0Parser::VarDefStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(C0Parser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(C0Parser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(C0Parser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(C0Parser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(C0Parser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(C0Parser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprStmt(C0Parser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlankStmt(C0Parser::BlankStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(C0Parser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOrExpr(C0Parser::LogicalOrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixExpr(C0Parser::PrefixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpr(C0Parser::PrimaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAndExpr(C0Parser::LogicalAndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncallExpr(C0Parser::FuncallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArefExpr(C0Parser::ArefExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuffixExpr(C0Parser::SuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpr(C0Parser::BinaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignExpr(C0Parser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubExpr(C0Parser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(C0Parser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralExpr(C0Parser::LiteralExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecIntegerConst(C0Parser::DecIntegerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharConst(C0Parser::CharConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConst(C0Parser::StringConstContext *ctx) override {
    return visitChildren(ctx);
  }


};

