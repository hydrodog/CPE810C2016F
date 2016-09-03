#include <iostream>
using namespace std;

int main() {
	short a = 20000 + 20000; // max is -32768 .. 32767   40000 MOD 32768
	cout << a << '\n';
	int secondsPerWeek = 7 * 24 * 60 * 60;
	cout << "secondsPerWeek = " << secondsPerWeek << '\n';
	int secondsPerYear = secondsPerWeek * 52;
	cout << "secondsPerYear = " << secondsPerYear << '\n';
	int age = 69;
	long int ageInSeconds = (long)age * secondsPerYear; // secondsPeryear automaticall promoted to long
	cout << "ageInSeconds = " << ageInSeconds << '\n';
	cout << "SIZE of long int = " << sizeof(ageInSeconds) << '\n';
	
	
	return 0;
}
