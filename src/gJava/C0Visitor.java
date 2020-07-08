// Generated from C0.g4 by ANTLR 4.8
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link C0Parser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface C0Visitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link C0Parser#compilationUnit}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCompilationUnit(C0Parser.CompilationUnitContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#functionDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionDefinition(C0Parser.FunctionDefinitionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code defVar}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefVar(C0Parser.DefVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code defConst}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefConst(C0Parser.DefConstContext ctx);
	/**
	 * Visit a parse tree produced by the {@code defArray}
	 * labeled alternative in {@link C0Parser#variableDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefArray(C0Parser.DefArrayContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#parameter}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameter(C0Parser.ParameterContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#typeType}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeType(C0Parser.TypeTypeContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlock(C0Parser.BlockContext ctx);
	/**
	 * Visit a parse tree produced by the {@code blockStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlockStmt(C0Parser.BlockStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDefStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDefStmt(C0Parser.VarDefStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ifStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfStmt(C0Parser.IfStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code forStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForStmt(C0Parser.ForStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code whileStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileStmt(C0Parser.WhileStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code returnStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReturnStmt(C0Parser.ReturnStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code breakStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBreakStmt(C0Parser.BreakStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code continueStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitContinueStmt(C0Parser.ContinueStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code exprStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExprStmt(C0Parser.ExprStmtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code blankStmt}
	 * labeled alternative in {@link C0Parser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlankStmt(C0Parser.BlankStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#ifCondition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfCondition(C0Parser.IfConditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfStatement(C0Parser.IfStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#elseStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitElseStatement(C0Parser.ElseStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#whileCondition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileCondition(C0Parser.WhileConditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#whileStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileStatement(C0Parser.WhileStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#forCondition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForCondition(C0Parser.ForConditionContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#forStep}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitForStep(C0Parser.ForStepContext ctx);
	/**
	 * Visit a parse tree produced by {@link C0Parser#expressionList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionList(C0Parser.ExpressionListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code prefixExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrefixExpr(C0Parser.PrefixExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code primaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrimaryExpr(C0Parser.PrimaryExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code funcallExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFuncallExpr(C0Parser.FuncallExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code arefExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArefExpr(C0Parser.ArefExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code binaryExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBinaryExpr(C0Parser.BinaryExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code assignExpr}
	 * labeled alternative in {@link C0Parser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignExpr(C0Parser.AssignExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code subExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSubExpr(C0Parser.SubExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code variableExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariableExpr(C0Parser.VariableExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code literalExpr}
	 * labeled alternative in {@link C0Parser#primary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLiteralExpr(C0Parser.LiteralExprContext ctx);
}