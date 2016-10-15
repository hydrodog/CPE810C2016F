#include <iostream>
using namespace std;

class JulDate {
private:

public:

};


int main() {
	JulDate d1 = JulianDate::now();
	JulDate d2 = d1 + 1; // tomorrow
	JulDate d3(2052, 1, 1, 12, 00, 00);
	JulDate d4(2061, 2, 28, 11, 00, 00);
	double del = d4 - d3;
	cout << del  << "\n";
	
}
