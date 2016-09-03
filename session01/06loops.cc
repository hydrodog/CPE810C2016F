#include <iostream>
using namespace std;

int main() {
	int count = 0;
	while (count < 10) { // count = 0 1 2 3 4 5 6 7 8 9 10
    cout << count;
		count = count + 1;
	}

	for (int x = 0; x < 10; x = x + 1)
		cout << x;

	for (int i = 1; i < 1024; i = i * 2) // 1 2 4 8 ... 512 
		cout << i;
	for (int i = 10; i > 0; i = i - 1) //10 9 8 7 6 5 4 3 2 1
		cout << i;
	for (int i = 0; i < 16; i = i * 2) // 000000000
		cout << i;
	for (int i = 1; i < 12; i = i + 2) // 1 3 5 7 9 11
		cout << i;

	// + - * / %
	// x = 2
	// x += 2; ==> x = x+ 2
	// x += 3 - 15;
  //x -= 2;  x*= 2; x/=2; x%=2;
	

	for (int i = 100; i > 0; i *= 2) // 100 200 400 ... OVERFLOW (becomes negative, quits)
		cout << i;
	for (int i = 100; i > 0; i++) // 100 101 102 103 ....
		cout << i;

	for (int i = 100; i > 0; i /= 3) // 100 33 11 3 1 
		cout << i;
	
	for (int i = 100; i > 0; i /= 3 + 1) // 100 25 6 1
		cout << i;

	for (int i = 100; i < 0; i--) // nothing
		cout << i;
	
	
	
	return 0;
}
