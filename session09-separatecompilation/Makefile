Fraction: main.o Fraction.o
	g++ main.o Fraction.o


main.o: main.cc Fraction.hh
	g++ -c main.cc

Fraction.cc: Fraction.hh
	touch Fraction.cc

Fraction.o: Fraction.cc 
	g++ -c Fraction.cc



