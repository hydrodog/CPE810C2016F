#include <iostream>
using namespace std;

/*
 1/2 + 1/3 = 5/6
 1/2 - 1/3 = 1/6





 */



class Fraction {
private:
	int num, den; // numerator, denominator
public:
  Fraction() {
		num = 0; den = 1;
	}
	Fraction(int n) {
		num = n; den = 1;
	}
	Fraction(int n, int d) {
		num = n; den = d;
	}
	void print() {
		cout << num << '/' << den;
	}

};


// class = type = specification of an object
// object is concrete (exists), takes memory, is an instance of a class
// the act of creating an object is called instantiation


// objects have data (typically hidden, private)
// we talk to objects using messages
// objects respond with methods
// in C++, methods=messages at compile time
int main() {
	Fraction f1(1,2);  // 1/2
	Fraction f2(1,3);  // 1/3
	int x; // x is random (whatever is on the stack...)
	//	Fraction f3;       //  what happens if it's 5/0???
	Fraction f3;       // 0/1
	Fraction f4(2);    // 2/1
	f1.print();        // 1/2
	
	//cout << f1;

}
