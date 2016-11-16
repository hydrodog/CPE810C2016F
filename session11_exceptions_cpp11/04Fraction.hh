#ifndef FRACTION_HH__
#define FRACTION_HH__

#include "DivByZero.hh"

class Fraction {
private:
	int m_num, m_den;
public:
	Fraction(int n, int d) throw(DivByZero);

	Fraction operator +(Fraction b);

	friend Fraction operator -(Fraction a, Fraction b);

	int num() const     { return m_num; }
	void num(int v)     { m_num = v; }
};

#endif
