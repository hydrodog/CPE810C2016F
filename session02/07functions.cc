#include <iostream>
using namespace std;

// f(x) = x^2

int f(int x) {
	return x*x;
}
//sqrt( )
double hypotenuse(double a, double b) {
	return sqrt(pow(a,2), b*b);
}

// DO NOT USE atan(y/x) ==> atan2(y, x)
double angle(double x, double y) {
	return atan2(y,x);

}

double fact(int n) {
	double prod = 1;
	for (int i = 1; i <= n; i++)
		prod *= i;
	return prod;
}

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

void hello() {
	cout << "hello";
}


int main() {
	hello();
	cout << f(2);
	cout << hypot(3, 4) << '\n';
	cout << hypot(4, 5) << '\n';
	cout << angle(50, 50) << '\n';
	cout << angle(0, 50) << '\n';
	cout << angle(50, 0) << '\n';

	//	cout << fact(5) << '\n'; // 120 = 5 * 4 * 3 * 2 * 1
	cout << sum(5, 9); // 5 + 6 + 7 + 8 + 9
	cout << fact(5) << '\n';
	cout << fact(20) << '\n';
	cout << fact(50) << '\n';
	cout << sum(1, 10) << '\n'; //55
	cout << sum(1, 1000) << '\n'; //500500
	cout << sum(1, 1000000) << '\n'; //55
	
}
