#include <iostream>
using namespace std;

int main() {
	cout << 2 + 3 * 4 << '\n'; // printing a single char \n
	cout << 2 / 3 * 3 << '\n';
	cout << 2 * 3 / 3 << '\n';
	cout << 2.0 / 3 * 3 << '\n';
	cout << 3.0 / 2.0 << '\n';
	cout << 1 + .5 / 2 << '\n'; // type promotion int ==> double

	for (int i = 0; i < 10; i++)
		cout << i;
	cout  << "\n";

	for (float f = 0.0; f < 10; f += .1)
		cout << f << ' ';
	cout << '\n';
	
	
	return 0;

}
