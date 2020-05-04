
// Generated from Hello.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HelloParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by HelloParser.
 */
class  HelloVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HelloParser.
   */
    virtual antlrcpp::Any visitR(HelloParser::RContext *context) = 0;


};

}  // namespace antlrcpptest
