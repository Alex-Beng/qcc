
// Generated from Hello.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HelloListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of HelloListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HelloBaseListener : public HelloListener {
public:

  virtual void enterR(HelloParser::RContext * /*ctx*/) override { }
  virtual void exitR(HelloParser::RContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
