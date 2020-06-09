CLASSPATH=../../antlr-4.8-complete.jar

# java -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest Hello.g4

java -cp $CLASSPATH org.antlr.v4.Tool Calculator.g4 -listener -visitor -o generated -Dlanguage=Cpp