#include <iostream>
using namespace std;

int main() {
	int a = 2, b = 3, c; // c is uninitialized, whatever random junk was in memory!

	c = a + b;
	cout << a - b << '\n';
	cout << a * b << '\n';
	cout << a / b << '\n';
	cout << b / a << '\n';
	cout << b % a << '\n'; // MOD  3 MOD 2 == 1
	cout << -5 / 3 << '\n';
	cout << -5 % 3 << '\n';
	
	
	return 0;
}
