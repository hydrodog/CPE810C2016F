class A {
private:
	int x;
public:
	int y;
	A() : y(2) { x = 3; cout << "hello"; }
	~A() { cout << y << "death!"; }
	void f() { cout << x + 1 << '\n'; }
};

class B : public A {
	int z; // private by default!
public:
	B() :z(2) { cout << "B!" << z; }
	// this is the same as
	//	B() : A(), z(2) { cout << "B!" << z; }
	~B() { cout << "yo!"; }
	void g() { cout << "test"; }
};

int main() {
	A a1;
	a1.f();
	B b1;
	b1.g();
}

