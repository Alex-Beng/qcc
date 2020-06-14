CPP := g++

FLAGS := -I/usr/local/include/antlr4-runtime -std=c++11 -I../generated -L/usr/local/lib/ -lantlr4-runtime
GENERATED_FILES := C0BaseListener.o  C0Lexer.o  C0Parser.o  CLexer.o  C0Listener.o  C0Visitor.o



qcc : main.cpp irlisten.o symtable.o $(GENERATED_FILES)
	$(CPP) $(GENERATED_FILES) irlisten.o symtable.o  main.cpp  $(FLAGS)  -o qcc

irlisten.o : IRListener.cpp
	$(CPP) IRListener.cpp $(FLAGS) -c -o irlisten.o

symtable.o : SymTable.cpp
	$(CPP) SymTable.cpp $(FLAGS) -c -o symtable.o




C0BaseListener.o : ./generated/C0BaseListener.cpp
	$(CPP) ./generated/C0BaseListener.cpp $(FLAGS) -c -o C0BaseListener.o

C0Lexer.o : ./generated/C0Lexer.cpp
	$(CPP) ./generated/C0Lexer.cpp $(FLAGS) -c -o C0Lexer.o

C0Parser.o : ./generated/C0Parser.cpp
	$(CPP) ./generated/C0Parser.cpp $(FLAGS) -c -o C0Parser.o

CLexer.o : ./generated/CLexer.cpp
	$(CPP) ./generated/CLexer.cpp $(FLAGS) -c -o CLexer.o

C0Listener.o : ./generated/C0Listener.cpp
	$(CPP) ./generated/C0Listener.cpp $(FLAGS) -c -o C0Listener.o

C0Visitor.o : ./generated/C0Visitor.cpp
	$(CPP) ./generated/C0Visitor.cpp $(FLAGS) -c -o C0Visitor.o

