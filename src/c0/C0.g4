grammar C0;

program  
   : declaration+
	;

declaration
   : var_declaration
   | fun_declaration
   ;

var_declaration
   : typeID IDENTITY ';'
   | typeID IDENTITY '=' expression ';'
   | typeID IDENTITY '=' IDENTITY ';'
   | typeID IDENTITY '[' expression ']' ';'
   ;

typeID
   : INT
   | CHAR
   | VOID
   | CONST INT
   | CONST CHAR
   ;

fun_declaration
   : typeID IDENTITY '(' params ')' compound_statement
   ;

params
   : param (',' param)*
   | VOID
   | 
   ;

param 
   : typeID IDENTITY
   ;

statement
   : expression_statement
   | scanf_statement
   | printf_statement
   | compound_statement
   | if_statement
   | while_statement
   | for_statement
   | return_statement
   | break_statement
   | continue_statement
   ;

expression_statement
   : expression ';'
   ;

scanf_statement
   : SCANF '(' args ')' ';'
   ;

printf_statement
   : PRINTF '(' STRING ')' ';'
   | PRINTF '(' STRING args ')' ';'
   | PRINTF '(' args ')' ';'
   ;

compound_statement		
   : '{' local_declaration* statement* '}'
   ;


local_declaration
   : typeID IDENTITY ';'
   | typeID IDENTITY '=' expression ';'
   | typeID IDENTITY '=' IDENTITY ';'
   | typeID IDENTITY '[' expression ']' ';'
   ;

if_statement
   : IF '(' expression ')' statement
   | IF '(' expression ')' ELSE statement
   ;

while_statement
   : WHILE '(' expression ')' statement
   ;

for_statement
   : FOR '(' local_declaration expression ';' expression ')' statement
   ;

return_statement
   : RETURN ';'
   | RETURN expression ';'
   ;

break_statement
   : BREAK ';'
   ;

continue_statement
   : CONTINUE ';'
   ;

expression
   : LITERAL
   | CCHAR
   | '(' expression ')'
   | IDENTITY
   | IDENTITY '[' expression ']'
   | IDENTITY '(' args ')'
   | '-' expression  // set neg
   | '+' expression  // set pos
   | '--' expression
   | '++' expression
   | expression '*' expression
   | expression '/' expression
   | expression '%' expression
   | expression '+' expression
   | expression '-' expression
   | expression EQ expression
   | expression NE expression
   | expression LE expression
   | expression '<' expression
   | expression GE expression
   | expression '>' expression
   | '!' expression
   | expression AND expression
   | expression OR expression
   | IDENTITY '=' expression
   | IDENTITY '[' expression ']' '=' expression
   ;

args
   : expression (',' expression)*
   |
   ;

SCANF
   : 'scanf'
   ;

PRINTF
   : 'printf'
   ;

CONST
   : 'const'
   ;

VOID				
   : 'void'
   ;
CHAR
   : 'char'
   ;
INT				
   : 'int'
   ;
WHILE				
   : 'while'
   ;
FOR
   : 'for'
   ;
IF					
   : 'if'
   ;
ELSE				
   : 'else'
   ;
RETURN				  
   : 'return'
   ;
BREAK               
   : 'break'
   ;
CONTINUE            
   : 'continue'
   ;
OR					
   : 'or'
   ;
AND				
   : 'and'
   ;
LE					
   : '<='
   ;
GE					
   : '>='
   ;
EQ					
   : '=='
   ;
NE					
   : '!='
   ;


STRING
   : '"' (ESC | ~ ["\\])* '"'
   ;

IDENTITY  				
   : [a-zA-Z_]([a-zA-Z_]|[0-9])*
   ;

LITERAL
   : DecimalConstant
   | OctalConstant
   | HexadecimalConstant
   ;

CCHAR
   : '\'' [a-zA-Z_] '\''
   ;

DecimalConstant		
   : '0'
   | [1-9][0-9]*
   ;

OctalConstant		
   : '0'[0-7]*
   ;

HexadecimalConstant	
   : '0'[xX][0-9a-fA-F]+
   ;

ESC
   : '\\' (["\\/bfnrt] | UNICODE)
   ;

UNICODE
   : 'u' HEX HEX HEX HEX
   ;

 HEX
   : [0-9a-fA-F]
   ;

WS					
   : (' '|'\t'|'\r'|'\n')+
   -> channel(HIDDEN)
   ;

COMMENT
    :   ( '//' ~[\r\n]* '\r'? '\n'
        | '/*' .*? '*/'
        ) -> channel(HIDDEN)
    ;