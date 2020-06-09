#include <iostream>
using namespace std;

#include <antlr4-runtime/antlr4-runtime.h>

#include "CalculatorMyVisitor.h"

#include "generated/CalculatorLexer.h"
#include "generated/CalculatorParser.h"
#include "generated/CalculatorBaseVisitor.h"

using namespace antlr4;

int main(int argc, char const *argv[]) {
    std::ifstream t("example.txt");  
    std::string input_str((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());  


    ANTLRInputStream input(input_str);
    CalculatorLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    CalculatorParser parser(&tokens);
    tree::ParseTree* tree = parser.prog();

    // cout<<tree->toStringTree(&parser);
    CalculatorMyVisitor eval;
    eval.visit(tree);
    

    return 0;
}

