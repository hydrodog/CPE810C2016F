#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	friend Fraction operator +(Fraction a, Fraction b) {
		Fraction ans(a.num*b.den + a.den*b.num, a.den*b.den );
		return ans;
	}
	friend ostream& operator <<(ostream& s, Fraction f) {
		return s << f.num << '/' << f.den;
	}

};


int main() {
	Fraction a(1, 2);
	Fraction b(1, 3);
	Fraction c = a + b;

	//analogy?	int x = 4 + 6 + 2;
	cout << a << " + " << b << " = " << c << '\n';
}
