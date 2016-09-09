#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a = -5;

	/*
000 = 0       = 0
001 = 1       = 1
010 = 2       = 2
011 = 3       = 3
100 = -4      = 4
101 = -3      = 5
110 = -2      = 6
111 = -1      = 7
	 */
	
	unsigned int b = -5; //  0000000000000000101 =5    11111111111111011 =  -5
	b = 1234567890;
	b = 4200000000;
	cout << sizeof(int) << '\n';
	long int x = 15125125125151L;
	double d = 1.5; // 1.23456789012345
	float f = 1.5f; // floating point 1.2345678
	f = 1.234567f;
	cout << setprecision(10) << f << "\n";
	f = 12345.67f;
	cout << f << "\n";
	f = 1.234567e+23;
	f = 1.234567e-30;
	long double ld = 1.5L;
	// Rule 1: NEVER USE FLOAT
	cout << setprecision(7);
	
	for (float f = 0.0; f < 10; f += .1)
		cout << f << ' ';
	cout << '\n';

	for (double f = 0.0; f < 10; f += .1)
		cout << f << ' ';
	cout << '\n';
	// Rule 2: NEVER USE double or any floating point for financial calculations
	//when exact matters
	
	//	float x[1000000];
	return 0;

}
