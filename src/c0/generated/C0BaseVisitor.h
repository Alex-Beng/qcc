
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

  virtual antlrcpp::Any visitProgram(C0Parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(C0Parser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_declaration(C0Parser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeID(C0Parser::TypeIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFun_declaration(C0Parser::Fun_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams(C0Parser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(C0Parser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(C0Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_statement(C0Parser::Expression_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScanf_statement(C0Parser::Scanf_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintf_statement(C0Parser::Printf_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_statement(C0Parser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocal_declaration(C0Parser::Local_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(C0Parser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(C0Parser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_statement(C0Parser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(C0Parser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_statement(C0Parser::Break_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinue_statement(C0Parser::Continue_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(C0Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(C0Parser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }


};

