#include <iostream>
using namespace std;

int main() {
	// overflow of unsigned int BEWARE
	unsigned int x = 1;
	for (int i = 1; i <= 20; i++) {
		x = x * i;
		cout << x << '\n';
	}
	
	return 0;
}
