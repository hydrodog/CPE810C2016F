#include <iostream>
using namespace std;

// f(x) = x^2

int f(int x) {
	return x*x;
}
//sqrt( )
double hypotenuse(double a, double b) {

}

// DO NOT USE atn(y/x) ==> atn2(y, x)
double angle(double x, double y) {


}

double fact(int n) {

}

int sum(int a, int b) {

}

void hello() {
	cout << "hello";
}


int main() {
	hello();
	cout << f(2);
	cout << hypot(3, 4) << '\n';
	cout << hypot(4, 5) << '\n';
	cout << angle(50, 50) << '\n';
	cout << angle(0, 50) << '\n';
	cout << angle(50, 0) << '\n';

	//	cout << fact(5) << '\n'; // 120 = 5 * 4 * 3 * 2 * 1
	cout << sum(5, 9); // 5 + 6 + 7 + 8 + 9
	cout << fact(5) << '\n';
	cout << fact(20) << '\n';
	cout << fact(50) << '\n';
	cout << sum(1, 10) << '\n'; //55
	cout << sum(1, 1000) << '\n'; //500500
	cout << sum(1, 1000000) << '\n'; //55
	
}
