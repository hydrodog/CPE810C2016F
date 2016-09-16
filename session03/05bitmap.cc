#include <iostream>
using namespace std;
void print(int a[10][8]) {
	for (int i = 0; i < 10; i++) {
		for(int j = 0; j < 8; j++) {
			cout << a[i][j];
		}
		cout << '\n';
	}			
}

void setAll(int x[10][8], int val) {
	for (int i = 0; i < 10; i++) {
		for(int j = 0; j < 8; j++) {
			x[i][j] = val;
		}
	}
}

int main() {
	int b[10][8] = {
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0}
	};

	//	int b[10][8] = {0}; //same!
	print(b);


	setAll(b, 1); // set all elements to 1
	//	setRow(b, 3, 5); // set all elements in row 3 to 5
	//	setCol(b, 4, 2); // set all elements in col 4 to 2
	print(b);
	//	cout << count(b, 3, 3); // count how many adjacent "pixels" are the same color
	//  fill(b, 3, 3, 9); // starting at location (3,3) change all pixels to 9
}
