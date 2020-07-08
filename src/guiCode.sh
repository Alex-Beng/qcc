java -cp ../antlr-4.8-complete.jar org.antlr.v4.Tool C0.g4 -listener -visitor -o gJava

cd gJava

javac ./*.java

grun C0 compilationUnit ../test_code/test-7.txt -gui