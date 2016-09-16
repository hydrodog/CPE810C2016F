#include <iostream>
using namespace std;

void f(double& r) {
	r = 1; // r is an alias for x, then an alias for y
}

int main() {
	int x; // x is random
	f(x); // x is now 1

	int y;
	f(y); // y is also 1
}
