
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  CalculatorParser : public antlr4::Parser {
public:
  enum {
    INT = 1, DOUBLE = 2, PI = 3, E = 4, POW = 5, NL = 6, WS = 7, ID = 8, 
    PLUS = 9, EQUAL = 10, MINUS = 11, MULT = 12, DIV = 13, LPAR = 14, RPAR = 15
  };

  enum {
    RuleInput = 0, RuleSetVar = 1, RulePlusOrMinus = 2, RuleMultOrDiv = 3, 
    RulePow = 4, RuleUnaryMinus = 5, RuleAtom = 6
  };

  CalculatorParser(antlr4::TokenStream *input);
  ~CalculatorParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InputContext;
  class SetVarContext;
  class PlusOrMinusContext;
  class MultOrDivContext;
  class PowContext;
  class UnaryMinusContext;
  class AtomContext; 

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InputContext() = default;
    void copyFrom(InputContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CalculateContext : public InputContext {
  public:
    CalculateContext(InputContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *NL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ToSetVarContext : public InputContext {
  public:
    ToSetVarContext(InputContext *ctx);

    SetVarContext *setVar();
    antlr4::tree::TerminalNode *NL();
    InputContext *input();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InputContext* input();

  class  SetVarContext : public antlr4::ParserRuleContext {
  public:
    SetVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetVarContext() = default;
    void copyFrom(SetVarContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetVariableContext : public SetVarContext {
  public:
    SetVariableContext(SetVarContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    PlusOrMinusContext *plusOrMinus();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SetVarContext* setVar();

  class  PlusOrMinusContext : public antlr4::ParserRuleContext {
  public:
    PlusOrMinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PlusOrMinusContext() = default;
    void copyFrom(PlusOrMinusContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ToMultOrDivContext : public PlusOrMinusContext {
  public:
    ToMultOrDivContext(PlusOrMinusContext *ctx);

    MultOrDivContext *multOrDiv();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusContext : public PlusOrMinusContext {
  public:
    PlusContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *PLUS();
    MultOrDivContext *multOrDiv();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusContext : public PlusOrMinusContext {
  public:
    MinusContext(PlusOrMinusContext *ctx);

    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *MINUS();
    MultOrDivContext *multOrDiv();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PlusOrMinusContext* plusOrMinus();
  PlusOrMinusContext* plusOrMinus(int precedence);
  class  MultOrDivContext : public antlr4::ParserRuleContext {
  public:
    MultOrDivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultOrDivContext() = default;
    void copyFrom(MultOrDivContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultiplicationContext : public MultOrDivContext {
  public:
    MultiplicationContext(MultOrDivContext *ctx);

    MultOrDivContext *multOrDiv();
    antlr4::tree::TerminalNode *MULT();
    PowContext *pow();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivisionContext : public MultOrDivContext {
  public:
    DivisionContext(MultOrDivContext *ctx);

    MultOrDivContext *multOrDiv();
    antlr4::tree::TerminalNode *DIV();
    PowContext *pow();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ToPowContext : public MultOrDivContext {
  public:
    ToPowContext(MultOrDivContext *ctx);

    PowContext *pow();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MultOrDivContext* multOrDiv();
  MultOrDivContext* multOrDiv(int precedence);
  class  PowContext : public antlr4::ParserRuleContext {
  public:
    PowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PowContext() = default;
    void copyFrom(PowContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PowerContext : public PowContext {
  public:
    PowerContext(PowContext *ctx);

    UnaryMinusContext *unaryMinus();
    antlr4::tree::TerminalNode *POW();
    PowContext *pow();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PowContext* pow();

  class  UnaryMinusContext : public antlr4::ParserRuleContext {
  public:
    UnaryMinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnaryMinusContext() = default;
    void copyFrom(UnaryMinusContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ChangeSignContext : public UnaryMinusContext {
  public:
    ChangeSignContext(UnaryMinusContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    UnaryMinusContext *unaryMinus();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ToAtomContext : public UnaryMinusContext {
  public:
    ToAtomContext(UnaryMinusContext *ctx);

    AtomContext *atom();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnaryMinusContext* unaryMinus();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AtomContext() = default;
    void copyFrom(AtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstantPIContext : public AtomContext {
  public:
    ConstantPIContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *PI();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableContext : public AtomContext {
  public:
    VariableContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BracesContext : public AtomContext {
  public:
    BracesContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    PlusOrMinusContext *plusOrMinus();
    antlr4::tree::TerminalNode *RPAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantEContext : public AtomContext {
  public:
    ConstantEContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *E();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleContext : public AtomContext {
  public:
    DoubleContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public AtomContext {
  public:
    IntContext(AtomContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AtomContext* atom();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex);
  bool multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
