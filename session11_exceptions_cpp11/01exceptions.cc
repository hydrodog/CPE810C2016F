#include <iostream>
using namespace std;

int f() {
	int x = 0;
  cin >> x;
	try {
		
		if (x == 0)
			throw "div by zero";
		return 1 / x;
	} catch (const char* s) {
		return -1;
	}
}

int main() {
  cout << f();
}
