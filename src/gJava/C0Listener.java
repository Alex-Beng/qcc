// Generated from C0.g4 by ANTLR 4.8
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link C0Parser}.
 */
public interface C0Listener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link C0Parser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void enterCompilationUnit(C0Parser.CompilationUnitContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void exitCompilationUnit(C0Parser.CompilationUnitContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#functionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDefinition(C0Parser.FunctionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#functionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDefinition(C0Parser.FunctionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code defVar}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void enterDefVar(C0Parser.DefVarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code defVar}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void exitDefVar(C0Parser.DefVarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code defConst}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void enterDefConst(C0Parser.DefConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code defConst}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void exitDefConst(C0Parser.DefConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code defArray}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void enterDefArray(C0Parser.DefArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code defArray}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 */
	void exitDefArray(C0Parser.DefArrayContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(C0Parser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(C0Parser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#typeType}.
	 * @param ctx the parse tree
	 */
	void enterTypeType(C0Parser.TypeTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#typeType}.
	 * @param ctx the parse tree
	 */
	void exitTypeType(C0Parser.TypeTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(C0Parser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(C0Parser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by the {@code blockStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterBlockStmt(C0Parser.BlockStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code blockStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitBlockStmt(C0Parser.BlockStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDefStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterVarDefStmt(C0Parser.VarDefStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDefStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitVarDefStmt(C0Parser.VarDefStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ifStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterIfStmt(C0Parser.IfStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ifStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitIfStmt(C0Parser.IfStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code forStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterForStmt(C0Parser.ForStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code forStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitForStmt(C0Parser.ForStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code whileStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterWhileStmt(C0Parser.WhileStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code whileStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitWhileStmt(C0Parser.WhileStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code returnStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterReturnStmt(C0Parser.ReturnStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code returnStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitReturnStmt(C0Parser.ReturnStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code breakStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterBreakStmt(C0Parser.BreakStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code breakStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitBreakStmt(C0Parser.BreakStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code continueStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterContinueStmt(C0Parser.ContinueStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code continueStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitContinueStmt(C0Parser.ContinueStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code exprStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterExprStmt(C0Parser.ExprStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code exprStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitExprStmt(C0Parser.ExprStmtContext ctx);
	/**
	 * Enter a parse tree produced by the {@code blankStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void enterBlankStmt(C0Parser.BlankStmtContext ctx);
	/**
	 * Exit a parse tree produced by the {@code blankStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 */
	void exitBlankStmt(C0Parser.BlankStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#ifCondition}.
	 * @param ctx the parse tree
	 */
	void enterIfCondition(C0Parser.IfConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#ifCondition}.
	 * @param ctx the parse tree
	 */
	void exitIfCondition(C0Parser.IfConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(C0Parser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(C0Parser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#elseStatement}.
	 * @param ctx the parse tree
	 */
	void enterElseStatement(C0Parser.ElseStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#elseStatement}.
	 * @param ctx the parse tree
	 */
	void exitElseStatement(C0Parser.ElseStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link C0Parser#expressionList}.
	 * @param ctx the parse tree
	 */
	void enterExpressionList(C0Parser.ExpressionListContext ctx);
	/**
	 * Exit a parse tree produced by {@link C0Parser#expressionList}.
	 * @param ctx the parse tree
	 */
	void exitExpressionList(C0Parser.ExpressionListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code prefixExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPrefixExpr(C0Parser.PrefixExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code prefixExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPrefixExpr(C0Parser.PrefixExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code primaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterPrimaryExpr(C0Parser.PrimaryExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code primaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitPrimaryExpr(C0Parser.PrimaryExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code funcallExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterFuncallExpr(C0Parser.FuncallExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code funcallExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitFuncallExpr(C0Parser.FuncallExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code arefExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterArefExpr(C0Parser.ArefExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code arefExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitArefExpr(C0Parser.ArefExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code binaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterBinaryExpr(C0Parser.BinaryExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code binaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitBinaryExpr(C0Parser.BinaryExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code assignExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAssignExpr(C0Parser.AssignExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code assignExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAssignExpr(C0Parser.AssignExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code subExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void enterSubExpr(C0Parser.SubExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code subExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void exitSubExpr(C0Parser.SubExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code variableExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void enterVariableExpr(C0Parser.VariableExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code variableExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void exitVariableExpr(C0Parser.VariableExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code literalExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void enterLiteralExpr(C0Parser.LiteralExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code literalExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 */
	void exitLiteralExpr(C0Parser.LiteralExprContext ctx);
}