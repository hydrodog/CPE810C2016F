#include <iostream>
using namespace std;

class JulDate {
private:
	const static int BASEYEAR; // turns into extern
	double jday;
public:
  
};

const int JulDate::BASEYEAR = 2000;  // (2000, 1,1, 0, 0, 0) = 0    (2000, 1, 2) = 1
/*
Every year has 365 days except... if y divisible by 4 leapyear 366 (Feb. 29)
except if the year mod 100 == 0  NO LEAP YEAR EXCEPT if year MOD 400 == 0 YES, it's a leap year.

  1900 NO (divisible by 100)
  1904 LEAP
  2000 LEAP (divisible by 400)

Jan Meeus "Astronomical Algorithms"



 */

int main() {
	JulDate d1 = JulianDate::now();
	JulDate d2(2005, 1, 15); // Jan 15, 2005
	//	cout << d1 + d2; // makes no sense!!!

	JulDate d2 = d1 + 1; // tomorrow
	JulDate d3(2052, 1, 1, 12, 00, 00); 
	JulDate d4(2061, 2, 28, 11, 00, 00);
	double del = d4 - d3;
	cout << del  << "\n";
	cout << d4.getYear() << ":" << d4.getMonth() << ":" << d4.getDay() << '\n';
	JulDate d5(2004, 2,29);
	// extra 5 points if you get the following right!
	cout << d5.getYear() << ":" << d5.getMonth() << ":" << d5.getDay() << '\n';
}
