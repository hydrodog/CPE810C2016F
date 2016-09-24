#include <iostream>
using namespace std;

class Fraction{
private:
  int num, den; // numerator, denominator
public:
	Fraction(int num = 0, int den = 1) : num(num), den(den) {} // initializer list
	void print() {
		cout << num << '/' << den;
	}

};

int main() {
	Fraction f1(1,2);  // 1/2
	f1.print();        // 1/2
}
