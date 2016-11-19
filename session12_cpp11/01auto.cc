#include <vector>
#include <list>
#include <iostream>
using namespace std;

//scope: where a symbol is visible
//lifetime: When it a variable born, and when does it die?

//const double pi = 3.1415926358979;
int x; // global variable = 0

int z = x;
static int y = 2;
void f() {
	cout << x;
	x = 2;
	cout << y;
	y++;
}

void h(const vector<int>& v) {
	for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
		cout << *i << ' ';
	for (auto i : v) {
		cout << i << ' ';
	}
}

int main() {
	cout << x;
	x = 1;
	f();
	f();
	cout << x; // THIS IS BAD CODE!! DO NOT PASS VALUES IN GLOBALS

	int a;  // a is on the stack
	//old C: auto int b = 2;
	register int c = 4; // suggestion to put c in a machine register

// new C++ 11
	auto b = 2; // automatically determine type from constant
	auto d = 2.5; // d is double
	auto e = 2.5f; // e is float

	vector<int> mylist;
	for (int i = 0; i < 10; i++)
		mylist.push_back(i);

	for (int i = 0; i < mylist.size(); i++)
		cout << mylist[i] << ' ';

	for (vector<int>::iterator i = mylist.begin(); i != mylist.end(); ++i)
		cout << *i << ' ';
	cout << '\n';
	for (auto x : mylist)
		cout << x << ' ';
	cout << '\n';
	for (auto& x : mylist) {
		x *= 2;
	}
	h(mylist);
}








