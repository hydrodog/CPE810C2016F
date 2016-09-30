#include <iostream>
using namespace std;

class Fraction {
public:
	Fraction(int n = 0, int m = 1) : num(n), den(d) {}	
	// when you write "friend" there is no "this"
	friend ostream& operator <<(ostream& s, Fraction f) {
		return s << f.num << '/' << f.den;
	}
	friend Fraction add(Fraction a, Fraction b); //declaration

private:
	int num;
	int den;
};

//define once
int x;
// illegal: multiple definition int x;

//declare multiple times (must agree)
extern int x;
extern int x;
extern int x;
extern int x;
extern int x;
extern int x;

// definition
Fraction add(Fraction a, Fraction b) {
	Fraction ans(a.num*b.den+b.num*a.den, a.den*b.den);
	return ans;
}


int main() {
	Fraction f1(1,2);
	Fraction f2;
	Fraction f3(1,3);
	cout << f1 << '\n';
    //Fraction f4 = f1 + f2;
	Fraction f4 = add(f1,f3);
	cout << f4 << '\n';
	Fraction f5(); // function prototype, not an object
	//	cout << f5;
}
