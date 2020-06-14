cd generated
cp ../Makefile.generated ./Makefile
time make
mv ./*.o ..