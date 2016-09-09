#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	time_t now = time(0);
	cout << now << '\n';
	return 0;

}
