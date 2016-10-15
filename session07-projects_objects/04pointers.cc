#include <iostream>
using namespace std;

void f(int a[10]) {
	cout << sizeof(a) << '\n'; // 8 (on 64 bit machines, size of a pointer)
	for (int i = 0; i < 10; i++)
		a[i] = 0;
	//WRONG!	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
	//		a[i] = 0;
}


int main() {
	int a[10];
	int* p = &a[0]; // p points to the address of a[0]
	int* q; // q is a pointer to int

	q = &a[0]; // make q point to first element of a

	p = a; // a is a pointer to the first element of a
	int b;
  cout << sizeof(b) << '\n'; // 4
	long L;
	cout << sizeof(L) << '\n'; // 8
	cout << sizeof(a) << '\n';
	for (int i = 0; i < 10; i++)
		a[i] = 0;
	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
		a[i] = 0;
  for (int*s = a; s < a + 10; s++)
		cout << s << '\n';

	
}
