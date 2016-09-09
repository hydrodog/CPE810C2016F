#include <iostream>
#include <cstdint>
using namespace std;

uint64_t sum(uint64_t n) {
	uint64_t s = 0;
	for (int i = 0; i <= n; i++)
		s = s + i;// s += i;
	return s;
}

int main() {
	for (int i = 0; i < 100; i++) {
		cout << i << ' ';
		cout << sum(i*1000000) << '\n' ;
	}
	return 0;
}
