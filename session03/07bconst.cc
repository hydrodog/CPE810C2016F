#include <iostream>
using namespace std;

void f(int& x) {
	x++;
	cout << x;
}


int main() {
	double a;
	double& r = a;
	double &r2 = a;
	double & r3 = a;

	int b = 2;
	int c = a+++++b;
	
	f(2.5);

	double x = 2.5;
	f(x);
	
}
