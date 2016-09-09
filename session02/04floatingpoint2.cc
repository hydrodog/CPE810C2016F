#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	/*
.5 = 1/2
1/3 = .333333333333
.1 = 1/10

in math a + b = b + a, this holds in fp

in math a + b + c == a + (b + c) (associativity)
in floating point this does not hold

		1.95
		 .00982
		 .00578
------------
1.95
.00982
----------
1.95
.00578
----------
1.95

.00982
.00578
-----------
.0156
1.95
---------
1.96





70.0000xxxx
70.0002xxxx
---------
0.0002xxxxxx



(x - 1.00000000001)(x - 1)

x^2 - 2.00000000001x + 1.00000000001





	*/
#if 0
	float f = 1.0f;
	while (1.0f + f > 1.0f) {
		cout << f << '\n';
		f /= 2;
	}
#endif
	long double f = 1.0;
	while (1.0L + f > 1.0L) {
		cout << f << '\n';
		f /= 2;
	}

	long double x = .1L;


	
	return 0;

}
