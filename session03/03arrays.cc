#include <iostream>
using namespace std;

int a; // = 0  global variables are visible to all functions, initialized to zero when the program starts
int c[5]; // all zeros

int main() {
	int x; // auto variables are random (because it would take time)
	int b[5]; // random junk (5 integers)
	int c[3] = { 5 };  // c[0] = 5   c[1] = 0  c[2] = 0
	int d[10] = {5, 3};  //d[0] = 5, d[1] = 3, d[2] = 0, d[3] = 0, ...

	// last position of an array is size - 1 (starts with 0)
	int e[100] = {0, 5 };
	int t[3][4] = {
		{ 9, 8, 5},  // t[0][0] = 9, t[0][1] = 8, t[0][2] = 5, t[0][3] = 0
		{ 4, 1, 2}   // t[1][0] = 4, t[1][1] = 1, t[1][2] = 2, t[1][3] = 0
		//t[2][0] t[2][1] t[2][2] t[2][3] === 0
	};
}
