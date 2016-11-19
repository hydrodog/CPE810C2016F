#include <iostream>
using namespace std;
namespace stevens {
	int x = 5;			// stevens::x
}
//using namespace stevens;
int x = 3;
void f() {
	int x = 4;
	cout << x; //4
}

void g() {
	cout << x;
}

int main() {
	int x = 1;
	cout << x;  // 1
	cout << ::x; // 3
	cout << stevens::x; //5
	{
		cout << x; //1
		int x = 2; // this variable is ON THE STACK (auto)
		cout << x; //2
		f();
		cout << x; //2
	}
	cout << x; //1

}