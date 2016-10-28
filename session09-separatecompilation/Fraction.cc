#include "Fraction.hh"
using namespace std;

Fraction::Fraction(int n, int d) : num(n), den(d) {
	count++;
}


Fraction::~Fraction() {
	count--;
}

Fraction operator +(Fraction a, Fraction b) {
	return Fraction(a.num*b.den + b.num*a.den, a.den * b.den);
}

Fraction operator -(Fraction a) {
	return Fraction(-a.num, a.den);
}

ostream& operator <<(ostream& s, const Fraction& f) {
	return s << f.num << "/" << f.den;
}

istream& operator >>(istream& s, Fraction& a) {
	char garbage;
	s >> a.num >> garbage >> a.den;
}

int Fraction::getCount() {
	return count;
}

int Fraction::count = 0;
