#include <iostream>
using namespace std;

int main() {
	// algebra a = 300000000000000000000000000000000000000000000001
	int a = 3; // int >= 16 bits  int >= short  int <= long  (on our PC, 64bit?)
	short int b = 20000; // 16 bits? usually short <= int
	short b2;
	long int c = 1000000000000L;  // 32 or 64
	long long d = 1000000000000L; // 64 bits

	unsigned long int e = 1UL;
	cout << a;
	/*

		signed: 15 bits 2^15+/-    -32768 ... 32767
     0000000000000000 = 0
		 0000000000000001 = 1
		 0000000000000010 = 2
		 ...
		 1000000000000000
		 1000000000000001
		 1000000000000010
		 ...
		 1111111111111111

		 000 = 0
		 001 = 1
		 010 = 2
		 011 = 3   //overflow here!
		 100 = -4
		 101 = -3
		 110 = -2
		 111 = -1

		 000 = 0
		 001 = 1
		 010 = 2
		 011 = 3
		 100 = 4
		 101 = 5
		 110 = 6
		 111 = 7



	 */
	return 0;
}
