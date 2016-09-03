#include <iostream>
using namespace std;

int main() {
	float f = 1.2345678;
	double d = 1.23456789012345;
	long double ld = .12345678901234567890123L;
	
	cout << f << '\n';
	cout << d << '\n'; // SIMPLE RULE: ALWAYS USE DOUBLE
	cout << ld << '\n'; // SIMPLE RULE: ALWAYS USE DOUBLE

	double e = 1 / 2; // 0.0
	double e2 = 1.0 / 2; // 0.5
	
}
