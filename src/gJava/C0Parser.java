// Generated from C0.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class C0Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, CharLiteral=34, StringLiteral=35, Identifier=36, DecimalInteger=37, 
		WS=38, BLOCK_COMMENT=39, LINE_COMMENT=40;
	public static final int
		RULE_compilationUnit = 0, RULE_functionDefinition = 1, RULE_variableDefinition = 2, 
		RULE_parameter = 3, RULE_typeType = 4, RULE_block = 5, RULE_statement = 6, 
		RULE_ifCondition = 7, RULE_ifStatement = 8, RULE_elseStatement = 9, RULE_expressionList = 10, 
		RULE_expression = 11, RULE_primary = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "functionDefinition", "variableDefinition", "parameter", 
			"typeType", "block", "statement", "ifCondition", "ifStatement", "elseStatement", 
			"expressionList", "expression", "primary"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "','", "')'", "';'", "'='", "'['", "']'", "'int'", "'char'", 
			"'const int'", "'const char'", "'void'", "'{'", "'}'", "'if'", "'else'", 
			"'for'", "'while'", "'return'", "'break'", "'continue'", "'+'", "'-'", 
			"'~'", "'!'", "'*'", "'/'", "'<'", "'>'", "'>='", "'<='", "'=='", "'!='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, "CharLiteral", 
			"StringLiteral", "Identifier", "DecimalInteger", "WS", "BLOCK_COMMENT", 
			"LINE_COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "C0.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public C0Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(C0Parser.EOF, 0); }
		public List<VariableDefinitionContext> variableDefinition() {
			return getRuleContexts(VariableDefinitionContext.class);
		}
		public VariableDefinitionContext variableDefinition(int i) {
			return getRuleContext(VariableDefinitionContext.class,i);
		}
		public List<FunctionDefinitionContext> functionDefinition() {
			return getRuleContexts(FunctionDefinitionContext.class);
		}
		public FunctionDefinitionContext functionDefinition(int i) {
			return getRuleContext(FunctionDefinitionContext.class,i);
		}
		public CompilationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilationUnit; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterCompilationUnit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitCompilationUnit(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitCompilationUnit(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CompilationUnitContext compilationUnit() throws RecognitionException {
		CompilationUnitContext _localctx = new CompilationUnitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_compilationUnit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(30);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11))) != 0)) {
				{
				setState(28);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
				case 1:
					{
					setState(26);
					variableDefinition();
					}
					break;
				case 2:
					{
					setState(27);
					functionDefinition();
					}
					break;
				}
				}
				setState(32);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(33);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDefinitionContext extends ParserRuleContext {
		public TypeTypeContext ret;
		public Token name;
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public FunctionDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterFunctionDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitFunctionDefinition(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitFunctionDefinition(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FunctionDefinitionContext functionDefinition() throws RecognitionException {
		FunctionDefinitionContext _localctx = new FunctionDefinitionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			((FunctionDefinitionContext)_localctx).ret = typeType();
			setState(36);
			((FunctionDefinitionContext)_localctx).name = match(Identifier);
			setState(37);
			match(T__0);
			setState(46);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11))) != 0)) {
				{
				setState(38);
				parameter();
				setState(43);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(39);
					match(T__1);
					setState(40);
					parameter();
					}
					}
					setState(45);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(48);
			match(T__2);
			setState(49);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDefinitionContext extends ParserRuleContext {
		public VariableDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDefinition; }
	 
		public VariableDefinitionContext() { }
		public void copyFrom(VariableDefinitionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DefVarContext extends VariableDefinitionContext {
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public DefVarContext(VariableDefinitionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterDefVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitDefVar(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitDefVar(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class DefConstContext extends VariableDefinitionContext {
		public Token rhs;
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public TerminalNode CharLiteral() { return getToken(C0Parser.CharLiteral, 0); }
		public TerminalNode DecimalInteger() { return getToken(C0Parser.DecimalInteger, 0); }
		public DefConstContext(VariableDefinitionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterDefConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitDefConst(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitDefConst(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class DefArrayContext extends VariableDefinitionContext {
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public TerminalNode DecimalInteger() { return getToken(C0Parser.DecimalInteger, 0); }
		public DefArrayContext(VariableDefinitionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterDefArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitDefArray(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitDefArray(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VariableDefinitionContext variableDefinition() throws RecognitionException {
		VariableDefinitionContext _localctx = new VariableDefinitionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_variableDefinition);
		int _la;
		try {
			setState(70);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				_localctx = new DefVarContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(51);
				typeType();
				setState(52);
				match(Identifier);
				setState(53);
				match(T__3);
				}
				break;
			case 2:
				_localctx = new DefConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(55);
				typeType();
				setState(56);
				match(Identifier);
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__4) {
					{
					setState(57);
					match(T__4);
					setState(58);
					((DefConstContext)_localctx).rhs = _input.LT(1);
					_la = _input.LA(1);
					if ( !(_la==CharLiteral || _la==DecimalInteger) ) {
						((DefConstContext)_localctx).rhs = (Token)_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(61);
				match(T__3);
				}
				break;
			case 3:
				_localctx = new DefArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(63);
				typeType();
				setState(64);
				match(Identifier);
				setState(65);
				match(T__5);
				setState(66);
				match(DecimalInteger);
				setState(67);
				match(T__6);
				setState(68);
				match(T__3);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterContext extends ParserRuleContext {
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterParameter(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitParameter(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitParameter(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_parameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
			typeType();
			setState(73);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeTypeContext extends ParserRuleContext {
		public Token type;
		public TypeTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterTypeType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitTypeType(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitTypeType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeTypeContext typeType() throws RecognitionException {
		TypeTypeContext _localctx = new TypeTypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_typeType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			((TypeTypeContext)_localctx).type = _input.LT(1);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11))) != 0)) ) {
				((TypeTypeContext)_localctx).type = (Token)_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitBlock(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(T__12);
			setState(81);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__3) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__14) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
				{
				{
				setState(78);
				statement();
				}
				}
				setState(83);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(84);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VarDefStmtContext extends StatementContext {
		public VariableDefinitionContext variableDefinition() {
			return getRuleContext(VariableDefinitionContext.class,0);
		}
		public VarDefStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterVarDefStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitVarDefStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitVarDefStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ForStmtContext extends StatementContext {
		public ExpressionContext init;
		public ExpressionContext cond;
		public ExpressionContext incr;
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ForStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterForStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitForStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitForStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ExprStmtContext extends StatementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExprStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterExprStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitExprStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitExprStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class BlankStmtContext extends StatementContext {
		public BlankStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterBlankStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitBlankStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitBlankStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class WhileStmtContext extends StatementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public WhileStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterWhileStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitWhileStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitWhileStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IfStmtContext extends StatementContext {
		public IfConditionContext ifCondition() {
			return getRuleContext(IfConditionContext.class,0);
		}
		public IfStatementContext ifStatement() {
			return getRuleContext(IfStatementContext.class,0);
		}
		public ElseStatementContext elseStatement() {
			return getRuleContext(ElseStatementContext.class,0);
		}
		public IfStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterIfStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitIfStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitIfStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class BlockStmtContext extends StatementContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public BlockStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterBlockStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitBlockStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitBlockStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class BreakStmtContext extends StatementContext {
		public BreakStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterBreakStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitBreakStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitBreakStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ReturnStmtContext extends StatementContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ReturnStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterReturnStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitReturnStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitReturnStmt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ContinueStmtContext extends StatementContext {
		public ContinueStmtContext(StatementContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterContinueStmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitContinueStmt(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitContinueStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_statement);
		int _la;
		try {
			setState(131);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__12:
				_localctx = new BlockStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				block();
				}
				break;
			case T__7:
			case T__8:
			case T__9:
			case T__10:
			case T__11:
				_localctx = new VarDefStmtContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				variableDefinition();
				}
				break;
			case T__14:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(88);
				match(T__14);
				setState(89);
				match(T__0);
				setState(90);
				ifCondition();
				setState(91);
				match(T__2);
				setState(92);
				ifStatement();
				setState(95);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(93);
					match(T__15);
					setState(94);
					elseStatement();
					}
					break;
				}
				}
				break;
			case T__16:
				_localctx = new ForStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(97);
				match(T__16);
				setState(98);
				match(T__0);
				setState(100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
					{
					setState(99);
					((ForStmtContext)_localctx).init = expression(0);
					}
				}

				setState(102);
				match(T__3);
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
					{
					setState(103);
					((ForStmtContext)_localctx).cond = expression(0);
					}
				}

				setState(106);
				match(T__3);
				setState(108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
					{
					setState(107);
					((ForStmtContext)_localctx).incr = expression(0);
					}
				}

				setState(110);
				match(T__2);
				setState(111);
				statement();
				}
				break;
			case T__17:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(112);
				match(T__17);
				setState(113);
				match(T__0);
				setState(114);
				expression(0);
				setState(115);
				match(T__2);
				setState(116);
				statement();
				}
				break;
			case T__18:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(118);
				match(T__18);
				setState(120);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
					{
					setState(119);
					expression(0);
					}
				}

				setState(122);
				match(T__3);
				}
				break;
			case T__19:
				_localctx = new BreakStmtContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(123);
				match(T__19);
				setState(124);
				match(T__3);
				}
				break;
			case T__20:
				_localctx = new ContinueStmtContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(125);
				match(T__20);
				setState(126);
				match(T__3);
				}
				break;
			case T__0:
			case T__21:
			case T__22:
			case T__23:
			case T__24:
			case CharLiteral:
			case StringLiteral:
			case Identifier:
			case DecimalInteger:
				_localctx = new ExprStmtContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(127);
				expression(0);
				setState(128);
				match(T__3);
				}
				break;
			case T__3:
				_localctx = new BlankStmtContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(130);
				match(T__3);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfConditionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IfConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifCondition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterIfCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitIfCondition(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitIfCondition(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IfConditionContext ifCondition() throws RecognitionException {
		IfConditionContext _localctx = new IfConditionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_ifCondition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(133);
			expression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfStatementContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public IfStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterIfStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitIfStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitIfStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IfStatementContext ifStatement() throws RecognitionException {
		IfStatementContext _localctx = new IfStatementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_ifStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElseStatementContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ElseStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterElseStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitElseStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitElseStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ElseStatementContext elseStatement() throws RecognitionException {
		ElseStatementContext _localctx = new ElseStatementContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_elseStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionListContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ExpressionListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterExpressionList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitExpressionList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitExpressionList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionListContext expressionList() throws RecognitionException {
		ExpressionListContext _localctx = new ExpressionListContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_expressionList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(139);
			expression(0);
			setState(144);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(140);
				match(T__1);
				setState(141);
				expression(0);
				}
				}
				setState(146);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PrefixExprContext extends ExpressionContext {
		public Token op;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public PrefixExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterPrefixExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitPrefixExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitPrefixExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PrimaryExprContext extends ExpressionContext {
		public PrimaryContext primary() {
			return getRuleContext(PrimaryContext.class,0);
		}
		public PrimaryExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterPrimaryExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitPrimaryExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitPrimaryExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class FuncallExprContext extends ExpressionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public FuncallExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterFuncallExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitFuncallExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitFuncallExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ArefExprContext extends ExpressionContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ArefExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterArefExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitArefExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitArefExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class BinaryExprContext extends ExpressionContext {
		public Token op;
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public BinaryExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterBinaryExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitBinaryExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitBinaryExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AssignExprContext extends ExpressionContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public AssignExprContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterAssignExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitAssignExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitAssignExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case CharLiteral:
			case StringLiteral:
			case Identifier:
			case DecimalInteger:
				{
				_localctx = new PrimaryExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(148);
				primary();
				}
				break;
			case T__21:
			case T__22:
				{
				_localctx = new PrefixExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(149);
				((PrefixExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__21 || _la==T__22) ) {
					((PrefixExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(150);
				expression(7);
				}
				break;
			case T__23:
			case T__24:
				{
				_localctx = new PrefixExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(151);
				((PrefixExprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__23 || _la==T__24) ) {
					((PrefixExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(152);
				expression(6);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(183);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(181);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						_localctx = new BinaryExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(155);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(156);
						((BinaryExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__25 || _la==T__26) ) {
							((BinaryExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(157);
						expression(6);
						}
						break;
					case 2:
						{
						_localctx = new BinaryExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(158);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(159);
						((BinaryExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__21 || _la==T__22) ) {
							((BinaryExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(160);
						expression(5);
						}
						break;
					case 3:
						{
						_localctx = new BinaryExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(161);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(162);
						((BinaryExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__27) | (1L << T__28) | (1L << T__29) | (1L << T__30))) != 0)) ) {
							((BinaryExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(163);
						expression(4);
						}
						break;
					case 4:
						{
						_localctx = new BinaryExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(164);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(165);
						((BinaryExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__31 || _la==T__32) ) {
							((BinaryExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(166);
						expression(3);
						}
						break;
					case 5:
						{
						_localctx = new AssignExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(167);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(168);
						match(T__4);
						setState(169);
						expression(1);
						}
						break;
					case 6:
						{
						_localctx = new ArefExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(170);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(171);
						match(T__5);
						setState(172);
						expression(0);
						setState(173);
						match(T__6);
						}
						break;
					case 7:
						{
						_localctx = new FuncallExprContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(175);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(176);
						match(T__0);
						setState(178);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__0) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << CharLiteral) | (1L << StringLiteral) | (1L << Identifier) | (1L << DecimalInteger))) != 0)) {
							{
							setState(177);
							expressionList();
							}
						}

						setState(180);
						match(T__2);
						}
						break;
					}
					} 
				}
				setState(185);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class PrimaryContext extends ParserRuleContext {
		public PrimaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primary; }
	 
		public PrimaryContext() { }
		public void copyFrom(PrimaryContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VariableExprContext extends PrimaryContext {
		public TerminalNode Identifier() { return getToken(C0Parser.Identifier, 0); }
		public VariableExprContext(PrimaryContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterVariableExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitVariableExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitVariableExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class LiteralExprContext extends PrimaryContext {
		public Token lite;
		public TerminalNode DecimalInteger() { return getToken(C0Parser.DecimalInteger, 0); }
		public TerminalNode CharLiteral() { return getToken(C0Parser.CharLiteral, 0); }
		public TerminalNode StringLiteral() { return getToken(C0Parser.StringLiteral, 0); }
		public LiteralExprContext(PrimaryContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterLiteralExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitLiteralExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitLiteralExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class SubExprContext extends PrimaryContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public SubExprContext(PrimaryContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).enterSubExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof C0Listener ) ((C0Listener)listener).exitSubExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof C0Visitor ) return ((C0Visitor<? extends T>)visitor).visitSubExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrimaryContext primary() throws RecognitionException {
		PrimaryContext _localctx = new PrimaryContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_primary);
		int _la;
		try {
			setState(192);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				_localctx = new SubExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(186);
				match(T__0);
				setState(187);
				expression(0);
				setState(188);
				match(T__2);
				}
				break;
			case Identifier:
				_localctx = new VariableExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(190);
				match(Identifier);
				}
				break;
			case CharLiteral:
			case StringLiteral:
			case DecimalInteger:
				_localctx = new LiteralExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(191);
				((LiteralExprContext)_localctx).lite = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << CharLiteral) | (1L << StringLiteral) | (1L << DecimalInteger))) != 0)) ) {
					((LiteralExprContext)_localctx).lite = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 11:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 5);
		case 1:
			return precpred(_ctx, 4);
		case 2:
			return precpred(_ctx, 3);
		case 3:
			return precpred(_ctx, 2);
		case 4:
			return precpred(_ctx, 1);
		case 5:
			return precpred(_ctx, 9);
		case 6:
			return precpred(_ctx, 8);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3*\u00c5\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\3\2\7\2\37\n\2\f\2\16\2\"\13\2\3\2\3"+
		"\2\3\3\3\3\3\3\3\3\3\3\3\3\7\3,\n\3\f\3\16\3/\13\3\5\3\61\n\3\3\3\3\3"+
		"\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4>\n\4\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\3\4\3\4\3\4\5\4I\n\4\3\5\3\5\3\5\3\6\3\6\3\7\3\7\7\7R\n\7\f\7\16\7U\13"+
		"\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\bb\n\b\3\b\3\b\3\b\5"+
		"\bg\n\b\3\b\3\b\5\bk\n\b\3\b\3\b\5\bo\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\5\b{\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0086\n"+
		"\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\f\7\f\u0091\n\f\f\f\16\f\u0094"+
		"\13\f\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u009c\n\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r"+
		"\u00b5\n\r\3\r\7\r\u00b8\n\r\f\r\16\r\u00bb\13\r\3\16\3\16\3\16\3\16\3"+
		"\16\3\16\5\16\u00c3\n\16\3\16\2\3\30\17\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\2\n\4\2$$\'\'\3\2\n\16\3\2\30\31\3\2\32\33\3\2\34\35\3\2\36!\3\2\""+
		"#\4\2$%\'\'\2\u00da\2 \3\2\2\2\4%\3\2\2\2\6H\3\2\2\2\bJ\3\2\2\2\nM\3\2"+
		"\2\2\fO\3\2\2\2\16\u0085\3\2\2\2\20\u0087\3\2\2\2\22\u0089\3\2\2\2\24"+
		"\u008b\3\2\2\2\26\u008d\3\2\2\2\30\u009b\3\2\2\2\32\u00c2\3\2\2\2\34\37"+
		"\5\6\4\2\35\37\5\4\3\2\36\34\3\2\2\2\36\35\3\2\2\2\37\"\3\2\2\2 \36\3"+
		"\2\2\2 !\3\2\2\2!#\3\2\2\2\" \3\2\2\2#$\7\2\2\3$\3\3\2\2\2%&\5\n\6\2&"+
		"\'\7&\2\2\'\60\7\3\2\2(-\5\b\5\2)*\7\4\2\2*,\5\b\5\2+)\3\2\2\2,/\3\2\2"+
		"\2-+\3\2\2\2-.\3\2\2\2.\61\3\2\2\2/-\3\2\2\2\60(\3\2\2\2\60\61\3\2\2\2"+
		"\61\62\3\2\2\2\62\63\7\5\2\2\63\64\5\f\7\2\64\5\3\2\2\2\65\66\5\n\6\2"+
		"\66\67\7&\2\2\678\7\6\2\28I\3\2\2\29:\5\n\6\2:=\7&\2\2;<\7\7\2\2<>\t\2"+
		"\2\2=;\3\2\2\2=>\3\2\2\2>?\3\2\2\2?@\7\6\2\2@I\3\2\2\2AB\5\n\6\2BC\7&"+
		"\2\2CD\7\b\2\2DE\7\'\2\2EF\7\t\2\2FG\7\6\2\2GI\3\2\2\2H\65\3\2\2\2H9\3"+
		"\2\2\2HA\3\2\2\2I\7\3\2\2\2JK\5\n\6\2KL\7&\2\2L\t\3\2\2\2MN\t\3\2\2N\13"+
		"\3\2\2\2OS\7\17\2\2PR\5\16\b\2QP\3\2\2\2RU\3\2\2\2SQ\3\2\2\2ST\3\2\2\2"+
		"TV\3\2\2\2US\3\2\2\2VW\7\20\2\2W\r\3\2\2\2X\u0086\5\f\7\2Y\u0086\5\6\4"+
		"\2Z[\7\21\2\2[\\\7\3\2\2\\]\5\20\t\2]^\7\5\2\2^a\5\22\n\2_`\7\22\2\2`"+
		"b\5\24\13\2a_\3\2\2\2ab\3\2\2\2b\u0086\3\2\2\2cd\7\23\2\2df\7\3\2\2eg"+
		"\5\30\r\2fe\3\2\2\2fg\3\2\2\2gh\3\2\2\2hj\7\6\2\2ik\5\30\r\2ji\3\2\2\2"+
		"jk\3\2\2\2kl\3\2\2\2ln\7\6\2\2mo\5\30\r\2nm\3\2\2\2no\3\2\2\2op\3\2\2"+
		"\2pq\7\5\2\2q\u0086\5\16\b\2rs\7\24\2\2st\7\3\2\2tu\5\30\r\2uv\7\5\2\2"+
		"vw\5\16\b\2w\u0086\3\2\2\2xz\7\25\2\2y{\5\30\r\2zy\3\2\2\2z{\3\2\2\2{"+
		"|\3\2\2\2|\u0086\7\6\2\2}~\7\26\2\2~\u0086\7\6\2\2\177\u0080\7\27\2\2"+
		"\u0080\u0086\7\6\2\2\u0081\u0082\5\30\r\2\u0082\u0083\7\6\2\2\u0083\u0086"+
		"\3\2\2\2\u0084\u0086\7\6\2\2\u0085X\3\2\2\2\u0085Y\3\2\2\2\u0085Z\3\2"+
		"\2\2\u0085c\3\2\2\2\u0085r\3\2\2\2\u0085x\3\2\2\2\u0085}\3\2\2\2\u0085"+
		"\177\3\2\2\2\u0085\u0081\3\2\2\2\u0085\u0084\3\2\2\2\u0086\17\3\2\2\2"+
		"\u0087\u0088\5\30\r\2\u0088\21\3\2\2\2\u0089\u008a\5\16\b\2\u008a\23\3"+
		"\2\2\2\u008b\u008c\5\16\b\2\u008c\25\3\2\2\2\u008d\u0092\5\30\r\2\u008e"+
		"\u008f\7\4\2\2\u008f\u0091\5\30\r\2\u0090\u008e\3\2\2\2\u0091\u0094\3"+
		"\2\2\2\u0092\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093\27\3\2\2\2\u0094"+
		"\u0092\3\2\2\2\u0095\u0096\b\r\1\2\u0096\u009c\5\32\16\2\u0097\u0098\t"+
		"\4\2\2\u0098\u009c\5\30\r\t\u0099\u009a\t\5\2\2\u009a\u009c\5\30\r\b\u009b"+
		"\u0095\3\2\2\2\u009b\u0097\3\2\2\2\u009b\u0099\3\2\2\2\u009c\u00b9\3\2"+
		"\2\2\u009d\u009e\f\7\2\2\u009e\u009f\t\6\2\2\u009f\u00b8\5\30\r\b\u00a0"+
		"\u00a1\f\6\2\2\u00a1\u00a2\t\4\2\2\u00a2\u00b8\5\30\r\7\u00a3\u00a4\f"+
		"\5\2\2\u00a4\u00a5\t\7\2\2\u00a5\u00b8\5\30\r\6\u00a6\u00a7\f\4\2\2\u00a7"+
		"\u00a8\t\b\2\2\u00a8\u00b8\5\30\r\5\u00a9\u00aa\f\3\2\2\u00aa\u00ab\7"+
		"\7\2\2\u00ab\u00b8\5\30\r\3\u00ac\u00ad\f\13\2\2\u00ad\u00ae\7\b\2\2\u00ae"+
		"\u00af\5\30\r\2\u00af\u00b0\7\t\2\2\u00b0\u00b8\3\2\2\2\u00b1\u00b2\f"+
		"\n\2\2\u00b2\u00b4\7\3\2\2\u00b3\u00b5\5\26\f\2\u00b4\u00b3\3\2\2\2\u00b4"+
		"\u00b5\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b8\7\5\2\2\u00b7\u009d\3\2"+
		"\2\2\u00b7\u00a0\3\2\2\2\u00b7\u00a3\3\2\2\2\u00b7\u00a6\3\2\2\2\u00b7"+
		"\u00a9\3\2\2\2\u00b7\u00ac\3\2\2\2\u00b7\u00b1\3\2\2\2\u00b8\u00bb\3\2"+
		"\2\2\u00b9\u00b7\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\31\3\2\2\2\u00bb\u00b9"+
		"\3\2\2\2\u00bc\u00bd\7\3\2\2\u00bd\u00be\5\30\r\2\u00be\u00bf\7\5\2\2"+
		"\u00bf\u00c3\3\2\2\2\u00c0\u00c3\7&\2\2\u00c1\u00c3\t\t\2\2\u00c2\u00bc"+
		"\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c2\u00c1\3\2\2\2\u00c3\33\3\2\2\2\25\36"+
		" -\60=HSafjnz\u0085\u0092\u009b\u00b4\u00b7\u00b9\u00c2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}