#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int &b = a; // reference
	int& c = a;



	
	c = 2;
	cout << b << '\n';
	int d = 5;
	
	//	int *p = a; // look at memory location #2 //makes no sense
	int*p = &a; // address of a in memory
	*p = 3;// set what p points to = 3 (p points to a) called "an alias"
	cout << a << '\n';
  p++; // p is not necessarily pointing to d.

	
}
