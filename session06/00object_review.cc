#include <iostream>
using namespace std;
class B {
private:
	int m_x;
public:
	B() : m_x(0) {  }
	void f() {  m_x++; }
	friend void myfriend(B b1);
	int x() { return m_x; }
};

void myfriend(B b1) {
	b1.m_x--;
}

class A {
private:
	int w;
	int x;
	B b;
public:
	A() :  w(0), x(0), b() {}
	void f() {
		cout << x << '\n';
		cout << b.x() << '\n';
	}
};


int main() {
	A a1;
	a1.f();
}
