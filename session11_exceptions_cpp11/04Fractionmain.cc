#include "04Fraction.hh"
using namespace std;

int main() {
	Fraction f1(1,2);
	try {
		Fraction f2(1,0);

	} catch (DivByZero d) {
		cout << d << '\n';
	}
}
