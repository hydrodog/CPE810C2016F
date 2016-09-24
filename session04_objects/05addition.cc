#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	void print() const {
		cout << num << '/' << den;
	}
	friend Fraction add(Fraction, Fraction); // this function has permission to access everything in the class
};
// IN C++, only my friends can touch my private parts.

Fraction add(Fraction a, Fraction b) {
	Fraction ans(a.num*b.den + a.den*b.num, a.den*b.den );
	return ans;
}


int main() {
	Fraction a(1, 2);
	a.print();
	cout << " + ";
	Fraction b(1, 3);
	b.print();
	cout << " = ";
	//	Fraction c = a.add(b);
	Fraction c = add(a, b);
	c.print();
}
