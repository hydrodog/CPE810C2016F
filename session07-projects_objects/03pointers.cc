#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int &b = a;
	int& c = a;
	a = 2;
	cout << b << '\n';

}
