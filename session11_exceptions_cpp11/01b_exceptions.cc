#include <iostream>
using namespace std;

int f() {
	int x = 0;
  cin >> x;
	if (x == 0)
		throw "div by zero";
	return 1 / x;
}

int main() {
	try {
		cout << f();
	} catch (int x) {
		cout << "Caught an int: " << x << '\n';
	} catch (const char* s) {
		cout << "Caught a string: " << s << '\n';
	} catch (const char* s) {
		cout << "Caught a string AGAIN: " << s << '\n';
	} catch (char* s) {
		cout << "Caught a READ/WRITE string: " << s << '\n';
	}
}
