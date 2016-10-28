#ifndef FRACTION_H__
#define FRACTION_H__

#include <iostream>

class Fraction {
private:
	int num, den;
	static int count;
public:
	Fraction(int n, int d);
	~Fraction();
	friend Fraction operator +(Fraction, Fraction);
	friend Fraction operator -(Fraction);
  friend std::ostream& operator <<(std::ostream& s, const Fraction& f);
	friend std::istream& operator >>(std::istream& s, Fraction& a);
	
	static int getCount();
};

#endif
