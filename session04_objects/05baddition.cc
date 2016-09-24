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
	friend Fraction operator +(Fraction a, Fraction b) {
		Fraction ans(a.num*b.den + a.den*b.num, a.den*b.den );
		return ans;
	}
};


int main() {
	Fraction a(1, 2);
	a.print();
	cout << " + ";
	Fraction b(1, 3);
	b.print();
	cout << " = ";
	Fraction c = a + b;
	c.print();
}
