#include <iostream>
using namespace std;

int fact(int n) {
	if (n <= 0)
		return 1;
	return n * fact(n-1);
}

void printMe() {
	int x = 2;
	cout << x;
	x++;
}

void printMe2() {
	static int x = 2;
	cout << x;
	x++;
}

static int seed = 0;

int rand() {
	return seed = 31079 * seed + 39031;
}

void srand(int s) {
	seed = s;
}


int main() {
	cout << fact(5) << "\n";
	printMe();
	printMe();
	printMe();
	printMe2();
	printMe2();
	printMe2();
	srand(3);
	for (int i = 0; i < 10; i++)
		cout << rand() << ' ';
}