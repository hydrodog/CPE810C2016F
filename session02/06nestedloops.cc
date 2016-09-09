#include <iostream>
using namespace std;

int main() {
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) {
			cout << i << ' ' << j << ' ';   // 0 0   1 0   2 0 
		}
		cout << '\n';
	}
	
	//second j = 1
	// 0 1  1 1  2 1


	const int n = 6;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << j*i << '\t';
		}
		cout << '\n';
	}
}





	
