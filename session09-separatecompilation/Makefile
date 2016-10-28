OPT=-O2

DEBUG=-g

Fraction: main.o Fraction.o
	g++ $(OPT) $(DEBUG) main.o Fraction.o -o Fraction


main.o: main.cc Fraction.hh
	g++  $(OPT) $(DEBUG) -c main.cc

Fraction.cc: Fraction.hh
	touch Fraction.cc

Fraction.o: Fraction.cc 
	g++ $(OPT) $(DEBUG) -c Fraction.cc

clean:
	rm *.o Fraction.exe



