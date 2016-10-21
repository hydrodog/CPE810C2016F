#include <iostream>

class Complex {
private:
	double re, im;
public:
	Complex(double r, double i);
	friend Complex operator +(Complex a, Complex b);
	friend Complex operator -(Complex a, Complex b);
	friend double abs(Complex c);
  static double abs(Complex c);
	double abs() const;
	friend std::ostream& operator <<(std::ostream& s, Complex c);
};
