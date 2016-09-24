#include <iostream>
using namespace std;
/*
	@author Dov Kruger
	Date: Sept. 23, 2016
  cite: I got this all from my students.


	Represent a single fraction with numerator and denominator
	denominator should never be zero
 */
class Fraction {
private:
  int num, den; // numerator, denominator
public:
	Fraction() : num(0), den(1) {}
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	void print() {
		cout << num << '/' << den;
	}

};

int main() {
	Fraction f1(1,2);  // 1/2
	Fraction f2;       // 0/1
	Fraction f3(2);    // 2/1

	// ILLEGAL Fraction f4(,2);
	f1.print();        // 1/2
	
	//cout << f1;

}
