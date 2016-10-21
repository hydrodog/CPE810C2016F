class Complex {
private:
	double re, im;
public:
	Complex(double r, double i) : re(r), im(i) {}
	//	~Complex() {   }

	friend Complex operator +(Complex a, Complex b) {
		return Complex(a.re+b.re, a.im+b.im);
	}
	friend Complex operator -(Complex a, Complex b) {
		return Complex(a.re-b.re, a.im-b.im);
	}
	//	friend double abs(Complex c);
	friend double abs(Complex c) {
		return sqrt(c.re*c.re + c.im*c.im);
	}
  static double abs(Complex c) {
    return sqrt(c.re*c.re + c.im*c.im);
	}
	double abs() const {
		return sqrt(re*re + im*im); // re implies this->re
		//		return sqrt(this->re*this->re + this->im*this->im); // the above is equivalent
	}
};
#if 0
double abs(Complex c) {
	return sqrt(c.re*c.re + c.im*c.im);
}
#endif

int main() {
	Complex c1(1.0, 0.5);
	Complex c2(2.0, 1.5);
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	double a = abs(c1); // function sqrt(re*re + im*im)
	double b = Complex::abs(c1); // static
	double c = c1.abs();  // C++: member function  Object-oriented design:  method

	
