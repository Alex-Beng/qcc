
// Generated from Calculator.g4 by ANTLR 4.8


#include "CalculatorVisitor.h"

#include "CalculatorParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

CalculatorParser::CalculatorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalculatorParser::~CalculatorParser() {
  delete _interpreter;
}

std::string CalculatorParser::getGrammarFileName() const {
  return "Calculator.g4";
}

const std::vector<std::string>& CalculatorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalculatorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InputContext ------------------------------------------------------------------

CalculatorParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::InputContext::getRuleIndex() const {
  return CalculatorParser::RuleInput;
}

void CalculatorParser::InputContext::copyFrom(InputContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CalculateContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext* CalculatorParser::CalculateContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::CalculateContext::EOF() {
  return getToken(CalculatorParser::EOF, 0);
}

tree::TerminalNode* CalculatorParser::CalculateContext::NL() {
  return getToken(CalculatorParser::NL, 0);
}

CalculatorParser::CalculateContext::CalculateContext(InputContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::CalculateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitCalculate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToSetVarContext ------------------------------------------------------------------

CalculatorParser::SetVarContext* CalculatorParser::ToSetVarContext::setVar() {
  return getRuleContext<CalculatorParser::SetVarContext>(0);
}

tree::TerminalNode* CalculatorParser::ToSetVarContext::NL() {
  return getToken(CalculatorParser::NL, 0);
}

CalculatorParser::InputContext* CalculatorParser::ToSetVarContext::input() {
  return getRuleContext<CalculatorParser::InputContext>(0);
}

CalculatorParser::ToSetVarContext::ToSetVarContext(InputContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ToSetVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitToSetVar(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::InputContext* CalculatorParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 0, CalculatorParser::RuleInput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(24);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InputContext *>(_tracker.createInstance<CalculatorParser::ToSetVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(14);
      setVar();
      setState(15);
      match(CalculatorParser::NL);
      setState(16);
      input();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InputContext *>(_tracker.createInstance<CalculatorParser::CalculateContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(18);
      plusOrMinus(0);
      setState(20);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CalculatorParser::NL) {
        setState(19);
        match(CalculatorParser::NL);
      }
      setState(22);
      match(CalculatorParser::EOF);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetVarContext ------------------------------------------------------------------

CalculatorParser::SetVarContext::SetVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::SetVarContext::getRuleIndex() const {
  return CalculatorParser::RuleSetVar;
}

void CalculatorParser::SetVarContext::copyFrom(SetVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SetVariableContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::SetVariableContext::ID() {
  return getToken(CalculatorParser::ID, 0);
}

tree::TerminalNode* CalculatorParser::SetVariableContext::EQUAL() {
  return getToken(CalculatorParser::EQUAL, 0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::SetVariableContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

CalculatorParser::SetVariableContext::SetVariableContext(SetVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::SetVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitSetVariable(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::SetVarContext* CalculatorParser::setVar() {
  SetVarContext *_localctx = _tracker.createInstance<SetVarContext>(_ctx, getState());
  enterRule(_localctx, 2, CalculatorParser::RuleSetVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<SetVarContext *>(_tracker.createInstance<CalculatorParser::SetVariableContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(CalculatorParser::ID);
    setState(27);
    match(CalculatorParser::EQUAL);
    setState(28);
    plusOrMinus(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusOrMinusContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext::PlusOrMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::PlusOrMinusContext::getRuleIndex() const {
  return CalculatorParser::RulePlusOrMinus;
}

void CalculatorParser::PlusOrMinusContext::copyFrom(PlusOrMinusContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToMultOrDivContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::ToMultOrDivContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::ToMultOrDivContext::ToMultOrDivContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ToMultOrDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitToMultOrDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext* CalculatorParser::PlusContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::PlusContext::PLUS() {
  return getToken(CalculatorParser::PLUS, 0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::PlusContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::PlusContext::PlusContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

CalculatorParser::PlusOrMinusContext* CalculatorParser::MinusContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::MinusContext::MINUS() {
  return getToken(CalculatorParser::MINUS, 0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::MinusContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

CalculatorParser::MinusContext::MinusContext(PlusOrMinusContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::plusOrMinus() {
   return plusOrMinus(0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::plusOrMinus(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::PlusOrMinusContext *_localctx = _tracker.createInstance<PlusOrMinusContext>(_ctx, parentState);
  CalculatorParser::PlusOrMinusContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalculatorParser::RulePlusOrMinus, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToMultOrDivContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(31);
    multOrDiv(0);
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(33);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(34);
          match(CalculatorParser::PLUS);
          setState(35);
          multOrDiv(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<PlusOrMinusContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePlusOrMinus);
          setState(36);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(37);
          match(CalculatorParser::MINUS);
          setState(38);
          multOrDiv(0);
          break;
        }

        } 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultOrDivContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext::MultOrDivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::MultOrDivContext::getRuleIndex() const {
  return CalculatorParser::RuleMultOrDiv;
}

void CalculatorParser::MultOrDivContext::copyFrom(MultOrDivContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultiplicationContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::MultiplicationContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

tree::TerminalNode* CalculatorParser::MultiplicationContext::MULT() {
  return getToken(CalculatorParser::MULT, 0);
}

CalculatorParser::PowContext* CalculatorParser::MultiplicationContext::pow() {
  return getRuleContext<CalculatorParser::PowContext>(0);
}

CalculatorParser::MultiplicationContext::MultiplicationContext(MultOrDivContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::MultiplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitMultiplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivisionContext ------------------------------------------------------------------

CalculatorParser::MultOrDivContext* CalculatorParser::DivisionContext::multOrDiv() {
  return getRuleContext<CalculatorParser::MultOrDivContext>(0);
}

tree::TerminalNode* CalculatorParser::DivisionContext::DIV() {
  return getToken(CalculatorParser::DIV, 0);
}

CalculatorParser::PowContext* CalculatorParser::DivisionContext::pow() {
  return getRuleContext<CalculatorParser::PowContext>(0);
}

CalculatorParser::DivisionContext::DivisionContext(MultOrDivContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::DivisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitDivision(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToPowContext ------------------------------------------------------------------

CalculatorParser::PowContext* CalculatorParser::ToPowContext::pow() {
  return getRuleContext<CalculatorParser::PowContext>(0);
}

CalculatorParser::ToPowContext::ToPowContext(MultOrDivContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ToPowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitToPow(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::MultOrDivContext* CalculatorParser::multOrDiv() {
   return multOrDiv(0);
}

CalculatorParser::MultOrDivContext* CalculatorParser::multOrDiv(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::MultOrDivContext *_localctx = _tracker.createInstance<MultOrDivContext>(_ctx, parentState);
  CalculatorParser::MultOrDivContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, CalculatorParser::RuleMultOrDiv, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ToPowContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(45);
    pow();
    _ctx->stop = _input->LT(-1);
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(53);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicationContext>(_tracker.createInstance<MultOrDivContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMultOrDiv);
          setState(47);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(48);
          match(CalculatorParser::MULT);
          setState(49);
          pow();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivisionContext>(_tracker.createInstance<MultOrDivContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMultOrDiv);
          setState(50);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(51);
          match(CalculatorParser::DIV);
          setState(52);
          pow();
          break;
        }

        } 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PowContext ------------------------------------------------------------------

CalculatorParser::PowContext::PowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::PowContext::getRuleIndex() const {
  return CalculatorParser::RulePow;
}

void CalculatorParser::PowContext::copyFrom(PowContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PowerContext ------------------------------------------------------------------

CalculatorParser::UnaryMinusContext* CalculatorParser::PowerContext::unaryMinus() {
  return getRuleContext<CalculatorParser::UnaryMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::PowerContext::POW() {
  return getToken(CalculatorParser::POW, 0);
}

CalculatorParser::PowContext* CalculatorParser::PowerContext::pow() {
  return getRuleContext<CalculatorParser::PowContext>(0);
}

CalculatorParser::PowerContext::PowerContext(PowContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::PowContext* CalculatorParser::pow() {
  PowContext *_localctx = _tracker.createInstance<PowContext>(_ctx, getState());
  enterRule(_localctx, 8, CalculatorParser::RulePow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<PowContext *>(_tracker.createInstance<CalculatorParser::PowerContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(58);
    unaryMinus();
    setState(61);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(59);
      match(CalculatorParser::POW);
      setState(60);
      pow();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryMinusContext ------------------------------------------------------------------

CalculatorParser::UnaryMinusContext::UnaryMinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::UnaryMinusContext::getRuleIndex() const {
  return CalculatorParser::RuleUnaryMinus;
}

void CalculatorParser::UnaryMinusContext::copyFrom(UnaryMinusContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ChangeSignContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::ChangeSignContext::MINUS() {
  return getToken(CalculatorParser::MINUS, 0);
}

CalculatorParser::UnaryMinusContext* CalculatorParser::ChangeSignContext::unaryMinus() {
  return getRuleContext<CalculatorParser::UnaryMinusContext>(0);
}

CalculatorParser::ChangeSignContext::ChangeSignContext(UnaryMinusContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ChangeSignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitChangeSign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToAtomContext ------------------------------------------------------------------

CalculatorParser::AtomContext* CalculatorParser::ToAtomContext::atom() {
  return getRuleContext<CalculatorParser::AtomContext>(0);
}

CalculatorParser::ToAtomContext::ToAtomContext(UnaryMinusContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ToAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitToAtom(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::UnaryMinusContext* CalculatorParser::unaryMinus() {
  UnaryMinusContext *_localctx = _tracker.createInstance<UnaryMinusContext>(_ctx, getState());
  enterRule(_localctx, 10, CalculatorParser::RuleUnaryMinus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::MINUS: {
        _localctx = dynamic_cast<UnaryMinusContext *>(_tracker.createInstance<CalculatorParser::ChangeSignContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(63);
        match(CalculatorParser::MINUS);
        setState(64);
        unaryMinus();
        break;
      }

      case CalculatorParser::INT:
      case CalculatorParser::DOUBLE:
      case CalculatorParser::PI:
      case CalculatorParser::E:
      case CalculatorParser::ID:
      case CalculatorParser::LPAR: {
        _localctx = dynamic_cast<UnaryMinusContext *>(_tracker.createInstance<CalculatorParser::ToAtomContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(65);
        atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

CalculatorParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::AtomContext::getRuleIndex() const {
  return CalculatorParser::RuleAtom;
}

void CalculatorParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstantPIContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::ConstantPIContext::PI() {
  return getToken(CalculatorParser::PI, 0);
}

CalculatorParser::ConstantPIContext::ConstantPIContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ConstantPIContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitConstantPI(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::VariableContext::ID() {
  return getToken(CalculatorParser::ID, 0);
}

CalculatorParser::VariableContext::VariableContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BracesContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::BracesContext::LPAR() {
  return getToken(CalculatorParser::LPAR, 0);
}

CalculatorParser::PlusOrMinusContext* CalculatorParser::BracesContext::plusOrMinus() {
  return getRuleContext<CalculatorParser::PlusOrMinusContext>(0);
}

tree::TerminalNode* CalculatorParser::BracesContext::RPAR() {
  return getToken(CalculatorParser::RPAR, 0);
}

CalculatorParser::BracesContext::BracesContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::BracesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitBraces(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantEContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::ConstantEContext::E() {
  return getToken(CalculatorParser::E, 0);
}

CalculatorParser::ConstantEContext::ConstantEContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::ConstantEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitConstantE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::DoubleContext::DOUBLE() {
  return getToken(CalculatorParser::DOUBLE, 0);
}

CalculatorParser::DoubleContext::DoubleContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::DoubleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitDouble(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::IntContext::INT() {
  return getToken(CalculatorParser::INT, 0);
}

CalculatorParser::IntContext::IntContext(AtomContext *ctx) { copyFrom(ctx); }


antlrcpp::Any CalculatorParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::AtomContext* CalculatorParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 12, CalculatorParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::PI: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::ConstantPIContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(68);
        match(CalculatorParser::PI);
        break;
      }

      case CalculatorParser::E: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::ConstantEContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(69);
        match(CalculatorParser::E);
        break;
      }

      case CalculatorParser::DOUBLE: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::DoubleContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(70);
        match(CalculatorParser::DOUBLE);
        break;
      }

      case CalculatorParser::INT: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::IntContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(71);
        match(CalculatorParser::INT);
        break;
      }

      case CalculatorParser::ID: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::VariableContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(72);
        match(CalculatorParser::ID);
        break;
      }

      case CalculatorParser::LPAR: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<CalculatorParser::BracesContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(73);
        match(CalculatorParser::LPAR);
        setState(74);
        plusOrMinus(0);
        setState(75);
        match(CalculatorParser::RPAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalculatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return plusOrMinusSempred(dynamic_cast<PlusOrMinusContext *>(context), predicateIndex);
    case 3: return multOrDivSempred(dynamic_cast<MultOrDivContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::plusOrMinusSempred(PlusOrMinusContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::multOrDivSempred(MultOrDivContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalculatorParser::_decisionToDFA;
atn::PredictionContextCache CalculatorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalculatorParser::_atn;
std::vector<uint16_t> CalculatorParser::_serializedATN;

std::vector<std::string> CalculatorParser::_ruleNames = {
  "input", "setVar", "plusOrMinus", "multOrDiv", "pow", "unaryMinus", "atom"
};

std::vector<std::string> CalculatorParser::_literalNames = {
  "", "", "", "'pi'", "'e'", "'^'", "'\n'", "", "", "'+'", "'='", "'-'", 
  "'*'", "'/'", "'('", "')'"
};

std::vector<std::string> CalculatorParser::_symbolicNames = {
  "", "INT", "DOUBLE", "PI", "E", "POW", "NL", "WS", "ID", "PLUS", "EQUAL", 
  "MINUS", "MULT", "DIV", "LPAR", "RPAR"
};

dfa::Vocabulary CalculatorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalculatorParser::_tokenNames;

CalculatorParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x11, 0x52, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x17, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1b, 0xa, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x2a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2d, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0x38, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x3b, 0xb, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x40, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x45, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x50, 
    0xa, 0x8, 0x3, 0x8, 0x2, 0x4, 0x6, 0x8, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x2, 0x2, 0x2, 0x57, 0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x20, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 
    0x12, 0x7, 0x8, 0x2, 0x2, 0x12, 0x13, 0x5, 0x2, 0x2, 0x2, 0x13, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 0x5, 0x6, 0x4, 0x2, 0x15, 0x17, 0x7, 
    0x8, 0x2, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x7, 0x2, 0x2, 
    0x3, 0x19, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x14, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1d, 0x7, 0xa, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0xc, 0x2, 0x2, 0x1e, 0x1f, 
    0x5, 0x6, 0x4, 0x2, 0x1f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x8, 
    0x4, 0x1, 0x2, 0x21, 0x22, 0x5, 0x8, 0x5, 0x2, 0x22, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x24, 0xc, 0x5, 0x2, 0x2, 0x24, 0x25, 0x7, 0xb, 0x2, 
    0x2, 0x25, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x26, 0x27, 0xc, 0x4, 0x2, 0x2, 
    0x27, 0x28, 0x7, 0xd, 0x2, 0x2, 0x28, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x29, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2f, 0x8, 0x5, 0x1, 0x2, 0x2f, 0x30, 0x5, 0xa, 0x6, 
    0x2, 0x30, 0x39, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0xc, 0x5, 0x2, 0x2, 
    0x32, 0x33, 0x7, 0xe, 0x2, 0x2, 0x33, 0x38, 0x5, 0xa, 0x6, 0x2, 0x34, 
    0x35, 0xc, 0x4, 0x2, 0x2, 0x35, 0x36, 0x7, 0xf, 0x2, 0x2, 0x36, 0x38, 
    0x5, 0xa, 0x6, 0x2, 0x37, 0x31, 0x3, 0x2, 0x2, 0x2, 0x37, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 0x5, 0xc, 0x7, 0x2, 
    0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3e, 0x40, 0x5, 0xa, 0x6, 0x2, 0x3f, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0xd, 0x2, 0x2, 0x42, 0x45, 0x5, 
    0xc, 0x7, 0x2, 0x43, 0x45, 0x5, 0xe, 0x8, 0x2, 0x44, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x50, 0x7, 0x5, 0x2, 0x2, 0x47, 0x50, 0x7, 0x6, 0x2, 0x2, 
    0x48, 0x50, 0x7, 0x4, 0x2, 0x2, 0x49, 0x50, 0x7, 0x3, 0x2, 0x2, 0x4a, 
    0x50, 0x7, 0xa, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x10, 0x2, 0x2, 0x4c, 0x4d, 
    0x5, 0x6, 0x4, 0x2, 0x4d, 0x4e, 0x7, 0x11, 0x2, 0x2, 0x4e, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb, 0x16, 0x1a, 0x29, 0x2b, 0x37, 0x39, 
    0x3f, 0x44, 0x4f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalculatorParser::Initializer CalculatorParser::_init;
