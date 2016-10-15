#include <iostream>
using namespace std;

class A {
public:
	char a; // 1 byte
	// 3 bytes padding
	int b; // 4 // aligned to 4-byt
	char c; //1
	// 7 bytes padding
	double d; //8
	A(char a, int b, char c, double d) : a(a), b(b), c(c), d(d) {}
};

class B {
public:
	double d; //8
	int b; // 4
	char a; // 1 byte
	char c; //1
	B(char a, int b, char c, double d) :  d(d),  c(c), a(a), b(b) {}
	B() {}
};

int main() {
	cout << sizeof(A) << '\n';
	cout << sizeof(B) << '\n';

	B b1[10]; // 160 bytes (16 * 10)
	for (int i = 0; i < 10; i++) {
		b1[i].d = 0;
		b1[i].b = 0;
		b1[i].a = 0;
		b1[i].c = '\0';
	}

	for (long long *s = (long long*)b1; s < b1 + 20; ++s)
		*s = 0;
	

	for (B * p = &b1[0]; p < b1 + 10; ++p) {
		(*p).d = 0;
		(*p).b = 0;
		(*p).a = 0;
		(*p).c = '\0';
	}

	for (B * p = &b1[0];    ) {
		p->d = 0;
		p->b = 0;
		p->a = 0;
		p->c = '\0';
	}


	A a1;
	A* q = &a1;
	a1.d = 5.5;
	q->d = 6.5;
	(*q).d = 7.5;



	
}
