progr: MakefileTest.o Second.o Tester.o Main.o
	clang -std=c11 -o program MakefileTest.c Second.o Tester.o Main.o
	rm -rf MakefileTest.o Second.o Tester.o Main.o
	print "Finished Compilation"

MakefileTest.o: MakefileTest.c 
	clang -std=c11 -c MakefileTest.c

Second.o:
	clang -std=c11 -c Second.c
Tester.o:
	clang -std=c11 -c Tester.c
Main.o:
	clang -std=c11 -c Main.c
cleanup: 
	rm -rf program
	rm -rf Second.o Tester.o Main.o MakefileTest.o   