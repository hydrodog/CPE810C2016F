#include <iostream>
using namespace std;

int main() {
	int a = 5 / 2;
	float b = 5 / 2;
	double c = 5.0 / 2; // promotes 2 -> 2.0
	double d = 5 / 2 * 3; // 6
	double e = 5 / 2.0 * 3; // 7.5
	double f = 5 / 2 * 3.0; // 6.0

	for (int i = 0; i < 10; i++)
		cout << i;
}
