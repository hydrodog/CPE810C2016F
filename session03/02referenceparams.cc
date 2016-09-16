#include <iostream>
using namespace std;

void f(double r, double i) {
	cin >> r >> i;
	cout << "r=" << r << " i=" << i << '\n';
}

void g(double& r, double& i) {
	cin >> r >> i;
	cout << "r=" << r << " i=" << i << '\n';
}

void rect2polar(double x, double y, double& r, double& theta) {

}


int main() {
	cout << "hello";
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << ',' << b << ',' << c << '\n';


	double r,i;
	f(r, i);
	cout << "r=" << r << " i=" << i << '\n';
	g(r, i);
	cout << "r=" << r << " i=" << i << '\n';

}
