#include <iostream>
using namespace std;

class DivByZero {
};

class Complex {
private:
	double r, i;
public:
	Complex(double r, double i) : r(r), i(i) {}
  Complex(double r) : r(r), i(0) {}
	
	Complex add(Complex b) const throw() {
		return Complex(r+b.r, i+b.i);
	}
	Complex operator +(Complex b) const throw() {
		return Complex(r+b.r, i+b.i);
	}
	friend Complex operator +(Complex a, Complex b) throw() {
		return Complex(a.r+b.r, a.i+b.i);
	}

	friend Complex operator -(Complex a, Complex b) throw() {
		return Complex(a.r-b.r, a.i-b.i);
	}
	friend Complex operator *(Complex a, Complex b) throw() {
		return Complex(a.r*b.r-a.i*b.i, a.r*b.i + a.i*b.r);
	}
	friend Complex operator /(Complex a, Complex b) throw(DivByZero)  {
		if (b.r == 0 && b.i == 0) {
			throw DivByZero(); // equivalent to: 			DivByZero d; throw d;
		}
    double magsq = b.r*b.r + b.i*b.i;		
		return Complex((a.r*b.r+a.i*b.i)/magsq, (a.i*b.r-a.r*b.i)/magsq);
	}


};


int main() {
	try {
		Complex c1(1.0, 2.0);
		Complex c2(0.0, 0.0);
		Complex c4 = c1.add(c2);
		Complex c4b = c1 + c2;
    Complex c5 = 1.0; //automatically call Complex(1.0)
		Complex c6 = c1 + 1; // c1 + Complex(1)
		Complex c6b = 1 + c1;
		
		Complex c3 = c1 / c2;
	} catch (DivByZero d) {
		cout << "Divide by zero\n";
	}

}
