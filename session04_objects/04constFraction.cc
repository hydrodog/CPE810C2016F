#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n, int d) : num(n), den(d) {}
	void print() const { // this method is READ ONLY.
		//This method promises "I WILL NOT CHANGE THE OBJECT"
		//ILLEGAL, this method is const		num = 19;
		// ILLEGAL, you cannot call a non-const method from a const one		thingy();
		cout << num << '/' << den;
	}
	void thingy() {
	}
};

const int f(int x) {

}
int main() {
	const int x = 4;
	const Fraction a(4, 2);  // this is a pointer to a constant
	a.print();
	Fraction b(2, 9);
	b.print();
}
