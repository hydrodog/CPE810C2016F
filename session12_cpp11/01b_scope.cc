#include <iostream>
using namespace std;

extern int x;
//extern const double pi;
//ILLEGAL, y is FILE LOCAL extern int y; // does not exist
void g() {

	cout << "hello\n";
	cout << x;
//	cout << pi;
}