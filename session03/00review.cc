#include <iostream>
using namespace std;

int f(int n) {
	return n*n;
}

void hello() {
	cout << "yo!";
}

int fact(int n) {

	int prod = 1;
	for (int i = 2; i <= n; i++)
		prod = prod * i; // prod *= i;
  return prod;
}

unsigned long long fact2(int n) {
	unsigned long long prod = 1;
	for (int i = 2; i <= n; i++)
		prod = prod * i; // prod *= i;
  return prod;
}

double fact3(int n) {
	double prod = 1;
	for (int i = 2; i <= n; i++)
		prod = prod * i; // prod *= i;
  return prod;
}


int main() {
	cout << f(3) << '\n';
	void *p = (void*)f;
	cout << p << '\n';
	//cout << hello() << '\n';
	hello();
	cout << hello << '\n';

	cout << fact(5) << '\n';
	cout << fact(5.1) << '\n'; // bad idea

	for (int i = -2; i < 30; i++)
		cout << i << '\t' << fact(i) << '\t' << fact2(i) << '\t' << fact3(i) << '\n';
}
