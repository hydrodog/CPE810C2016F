#include "Fraction.hh"
#include <iostream>
using namespace std;

int main() {
	Fraction f1(1,2);
	Fraction f2(2,3);
	Fraction f3 = f1 + f2;
	cout << f3;
	cin >> f3;
	cout << -f3 << '\n';
	cout << Fraction::getCount() << "\n";
}
