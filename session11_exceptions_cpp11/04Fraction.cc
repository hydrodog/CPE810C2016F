#include "04Fraction.hh"

Fraction::Fraction(int n, int d)  throw(DivByZero) : m_num(n), m_den(d) {
	if (d == 0)  
		throw DivByZero(__FILE__, __LINE__);
}

Fraction Fraction::operator +(Fraction b) {
	return Fraction(m_num*b.m_den - b.m_num * m_den, m_den * b.m_den);
}

Fraction operator -(Fraction a, Fraction b) {
	return Fraction(a.m_num*b.m_den - b.m_num*a.m_den, a.m_den * b.m_den);
}
