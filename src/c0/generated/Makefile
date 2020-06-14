CPP := g++

FLAGS := -I/usr/local/include/antlr4-runtime -std=c++11 -I../generated -L/usr/local/lib/ -lantlr4-runtime

GENERATED_FILES :=   ./generated/C0BaseVisitor.cpp   ./generated/C0Listener.cpp  ./generated/C0Visitor.cpp

all : C0BaseListener.o C0Lexer.o C0Parser.o CLexer.o C0Listener.o C0Visitor.o
 
C0BaseListener.o : C0BaseListener.cpp
	$(CPP) C0BaseListener.cpp $(FLAGS) -c -o C0BaseListener.o

C0Lexer.o : C0Lexer.cpp
	$(CPP) C0Lexer.cpp $(FLAGS) -c -o C0Lexer.o

C0Parser.o : C0Parser.cpp
	$(CPP) C0Parser.cpp $(FLAGS) -c -o C0Parser.o

CLexer.o : CLexer.cpp
	$(CPP) CLexer.cpp $(FLAGS) -c -o CLexer.o

C0Listener.o : C0Listener.cpp
	$(CPP) C0Listener.cpp $(FLAGS) -c -o C0Listener.o

C0Visitor.o : C0Visitor.cpp
	$(CPP) C0Visitor.cpp $(FLAGS) -c -o C0Visitor.o

