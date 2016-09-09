#include <iostream>
using namespace std;

int main() {
	for (int i = 10; i < 10; i--)
		cout << i;
	cout << '\n';

	for (int i = 10; i >= 10; i++) // until overflow
		cout << i;
	cout << '\n';
	
	for (int i = -10; i < 10; i *= 2)
		cout << i;
	cout << '\n';
	
	for (int i = 0; i < 10; i *= 2)
		cout << i;
	cout << '\n';

}
