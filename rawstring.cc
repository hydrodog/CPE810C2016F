#include <iostream>
using namespace std;

int main() {
	const char* s=
R"This is a test
this is only a test
\put \n whatever letters
\you want in here
R";
	cout << s << '\n';
}
