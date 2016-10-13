#include <iostream>
using namespace std;

void f(int x) {
	x = 99; // x is passed by value, the original does not change
}

void g(int & x) {
	x = 99;
}

void print(double x) {
	cout << x;
}

void print2(const double& x) {
	cout << x;
}


int main() {
	int a = 5;
	int b = a;
	b = 6; // b is copy of a, a does not change
	f(a);
	cout << a << '\n';
  g(a);
	cout << a << '\n'; // a is now 99
	int & r = a; // r and a are the same
	r = 11; // a is now 11
	// nothing you can do will admit that r exists
	cout << sizeof(r) << '\n'; // sizeof(a)
	cout << &r << '\n'; // same as &a

	//#include <math.h>  --> M_PI
  const double pi = 3.14159265358979;
	//ILLEGAL: 	pi = 4;
	//ILLEGAL: r2 is not const: double& r2 = pi;
	const double& r2 = pi;
	// ILLEGAL: r2 is const: r2 = 4;
	print(pi);
	print2(pi);
}
	
