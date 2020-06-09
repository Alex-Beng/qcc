
// Generated from Calculator.g4 by ANTLR 4.8


#include "CalculatorListener.h"
#include "CalculatorVisitor.h"

#include "CalculatorParser.h"


using namespace antlrcpp;
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


//----------------- ProgContext ------------------------------------------------------------------

CalculatorParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalculatorParser::StatContext *> CalculatorParser::ProgContext::stat() {
  return getRuleContexts<CalculatorParser::StatContext>();
}

CalculatorParser::StatContext* CalculatorParser::ProgContext::stat(size_t i) {
  return getRuleContext<CalculatorParser::StatContext>(i);
}


size_t CalculatorParser::ProgContext::getRuleIndex() const {
  return CalculatorParser::RuleProg;
}

void CalculatorParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void CalculatorParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any CalculatorParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::ProgContext* CalculatorParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalculatorParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stat();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalculatorParser::T__6)
      | (1ULL << CalculatorParser::ID)
      | (1ULL << CalculatorParser::INT)
      | (1ULL << CalculatorParser::NEWLINE))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CalculatorParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::StatContext::getRuleIndex() const {
  return CalculatorParser::RuleStat;
}

void CalculatorParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::BlankContext::NEWLINE() {
  return getToken(CalculatorParser::NEWLINE, 0);
}

CalculatorParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

void CalculatorParser::BlankContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlank(this);
}
void CalculatorParser::BlankContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlank(this);
}

antlrcpp::Any CalculatorParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

CalculatorParser::ExprContext* CalculatorParser::PrintExprContext::expr() {
  return getRuleContext<CalculatorParser::ExprContext>(0);
}

tree::TerminalNode* CalculatorParser::PrintExprContext::NEWLINE() {
  return getToken(CalculatorParser::NEWLINE, 0);
}

CalculatorParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

void CalculatorParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}
void CalculatorParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

antlrcpp::Any CalculatorParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::AssignContext::ID() {
  return getToken(CalculatorParser::ID, 0);
}

CalculatorParser::ExprContext* CalculatorParser::AssignContext::expr() {
  return getRuleContext<CalculatorParser::ExprContext>(0);
}

tree::TerminalNode* CalculatorParser::AssignContext::NEWLINE() {
  return getToken(CalculatorParser::NEWLINE, 0);
}

CalculatorParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

void CalculatorParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void CalculatorParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

antlrcpp::Any CalculatorParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
CalculatorParser::StatContext* CalculatorParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, CalculatorParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(20);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalculatorParser::PrintExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(11);
      expr(0);
      setState(12);
      match(CalculatorParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalculatorParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(14);
      match(CalculatorParser::ID);
      setState(15);
      match(CalculatorParser::T__0);
      setState(16);
      expr(0);
      setState(17);
      match(CalculatorParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalculatorParser::BlankContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(19);
      match(CalculatorParser::NEWLINE);
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

//----------------- ExprContext ------------------------------------------------------------------

CalculatorParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalculatorParser::ExprContext::getRuleIndex() const {
  return CalculatorParser::RuleExpr;
}

void CalculatorParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

CalculatorParser::ExprContext* CalculatorParser::ParensContext::expr() {
  return getRuleContext<CalculatorParser::ExprContext>(0);
}

CalculatorParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void CalculatorParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}

antlrcpp::Any CalculatorParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<CalculatorParser::ExprContext *> CalculatorParser::MulDivContext::expr() {
  return getRuleContexts<CalculatorParser::ExprContext>();
}

CalculatorParser::ExprContext* CalculatorParser::MulDivContext::expr(size_t i) {
  return getRuleContext<CalculatorParser::ExprContext>(i);
}

CalculatorParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void CalculatorParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}

antlrcpp::Any CalculatorParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<CalculatorParser::ExprContext *> CalculatorParser::AddSubContext::expr() {
  return getRuleContexts<CalculatorParser::ExprContext>();
}

CalculatorParser::ExprContext* CalculatorParser::AddSubContext::expr(size_t i) {
  return getRuleContext<CalculatorParser::ExprContext>(i);
}

CalculatorParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void CalculatorParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

antlrcpp::Any CalculatorParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::IdContext::ID() {
  return getToken(CalculatorParser::ID, 0);
}

CalculatorParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}
void CalculatorParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

antlrcpp::Any CalculatorParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalculatorParser::IntContext::INT() {
  return getToken(CalculatorParser::INT, 0);
}

CalculatorParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void CalculatorParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

antlrcpp::Any CalculatorParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerContext ------------------------------------------------------------------

std::vector<CalculatorParser::ExprContext *> CalculatorParser::PowerContext::expr() {
  return getRuleContexts<CalculatorParser::ExprContext>();
}

CalculatorParser::ExprContext* CalculatorParser::PowerContext::expr(size_t i) {
  return getRuleContext<CalculatorParser::ExprContext>(i);
}

CalculatorParser::PowerContext::PowerContext(ExprContext *ctx) { copyFrom(ctx); }

void CalculatorParser::PowerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPower(this);
}
void CalculatorParser::PowerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalculatorListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPower(this);
}

antlrcpp::Any CalculatorParser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalculatorVisitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}

CalculatorParser::ExprContext* CalculatorParser::expr() {
   return expr(0);
}

CalculatorParser::ExprContext* CalculatorParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalculatorParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalculatorParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalculatorParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalculatorParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(23);
        match(CalculatorParser::INT);
        break;
      }

      case CalculatorParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        match(CalculatorParser::ID);
        break;
      }

      case CalculatorParser::T__6: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(25);
        match(CalculatorParser::T__6);
        setState(26);
        expr(0);
        setState(27);
        match(CalculatorParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(40);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(31);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");

          setState(32);
          match(CalculatorParser::T__1);
          setState(33);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(34);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(35);
          dynamic_cast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CalculatorParser::T__2

          || _la == CalculatorParser::T__3)) {
            dynamic_cast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(36);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(37);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(38);
          dynamic_cast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CalculatorParser::T__4

          || _la == CalculatorParser::T__5)) {
            dynamic_cast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(39);
          expr(5);
          break;
        }

        } 
      }
      setState(44);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalculatorParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

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
  "prog", "stat", "expr"
};

std::vector<std::string> CalculatorParser::_literalNames = {
  "", "'='", "'^'", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
};

std::vector<std::string> CalculatorParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "ID", "INT", "NEWLINE", "WS"
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
    0x3, 0xe, 0x30, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x17, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x20, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x2b, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2e, 0xb, 
    0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 0x4, 0x3, 0x2, 
    0x5, 0x6, 0x3, 0x2, 0x7, 0x8, 0x2, 0x34, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa, 
    0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x5, 0x6, 0x4, 0x2, 0xe, 0xf, 
    0x7, 0xd, 0x2, 0x2, 0xf, 0x17, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x7, 
    0xb, 0x2, 0x2, 0x11, 0x12, 0x7, 0x3, 0x2, 0x2, 0x12, 0x13, 0x5, 0x6, 
    0x4, 0x2, 0x13, 0x14, 0x7, 0xd, 0x2, 0x2, 0x14, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x17, 0x7, 0xd, 0x2, 0x2, 0x16, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x10, 0x3, 0x2, 0x2, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x8, 0x4, 0x1, 0x2, 0x19, 0x20, 
    0x7, 0xc, 0x2, 0x2, 0x1a, 0x20, 0x7, 0xb, 0x2, 0x2, 0x1b, 0x1c, 0x7, 
    0x9, 0x2, 0x2, 0x1c, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1d, 0x1e, 0x7, 0xa, 
    0x2, 0x2, 0x1e, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0xc, 0x8, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x4, 0x2, 0x2, 0x23, 0x2b, 0x5, 0x6, 0x4, 0x9, 0x24, 0x25, 
    0xc, 0x7, 0x2, 0x2, 0x25, 0x26, 0x9, 0x2, 0x2, 0x2, 0x26, 0x2b, 0x5, 
    0x6, 0x4, 0x8, 0x27, 0x28, 0xc, 0x6, 0x2, 0x2, 0x28, 0x29, 0x9, 0x3, 
    0x2, 0x2, 0x29, 0x2b, 0x5, 0x6, 0x4, 0x7, 0x2a, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x24, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x7, 0xb, 0x16, 0x1f, 0x2a, 0x2c, 
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
