
// Generated from Hello.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HelloVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of HelloVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HelloBaseVisitor : public HelloVisitor {
public:

  virtual antlrcpp::Any visitR(HelloParser::RContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
