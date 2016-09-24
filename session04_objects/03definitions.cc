#include <iostream>
using namespace std;

int f(); // function prototype (declaration)
int f(); // function prototype (declaration)
int f(); // function prototype (declaration)

//definition.  Any symbol can only be defined ONCE
int f() {
	return 2 + 2;
}

int f() {
	return 2 + 2;
}

int main() {
	int x;
	int x; // can't define the same symbol twice
	f();
}
