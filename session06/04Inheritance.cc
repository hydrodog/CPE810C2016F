#include <iostream>
using namespace std;

class A {
private:
	int x;
protected:
	int y;
public:
	A(int x) : x(x), y(0) {}
	void f() { cout << "A::f()\n"; }
};

class B : public A { // B is a kind of A    B IS_A A
private:
	int w;
public:
	B() : A(10), w(3) {}
	void g() { cout << "B::g() " << w << "\n"; }
};
int main() {
	A a1(2);
	a1.f();

	B b1;
	b1.g();
	b1.f();

	a1.g();
}
