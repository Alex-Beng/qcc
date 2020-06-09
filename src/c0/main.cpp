#define DEBUG

#include <iostream>
using namespace std;

#include <antlr4-runtime/antlr4-runtime.h>

#include "generated/C0Lexer.h"
#include "generated/C0Parser.h"

using namespace antlr4;

int main(int argc, char const *argv[]) {
    if (argc > 2) {
        std::cout << "Usage: ./main [<file>]" << std::endl;
        return EXIT_FAILURE;
    }
    if (argc == 2 and not std::fopen(argv[1], "r")) {
        std::cout << "No such file: " << argv[1] << std::endl;
        return EXIT_FAILURE;
    }

    antlr4::ANTLRInputStream input;
    if (argc == 2) {  // reads from <file>
        std::ifstream stream;
        stream.open(argv[1]);
        input = antlr4::ANTLRInputStream(stream);
    }
    else {            // reads fron std::cin
        input = antlr4::ANTLRInputStream(std::cin);
    }



    C0Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    C0Parser parser(&tokens);
    tree::ParseTree* tree = parser.compilationUnit();

#ifdef DEBUG
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
#endif

    if (lexer.getNumberOfSyntaxErrors() > 0 or
        parser.getNumberOfSyntaxErrors() > 0) {
        std::cout << "Lexical and/or syntactical errors have been found." << std::endl;
        return EXIT_FAILURE;
    }

    antlr4::tree::ParseTreeWalker walker;

    walker.w
    return 0;
}

