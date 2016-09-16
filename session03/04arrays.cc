#include <iostream>
using namespace std;

int main() {
	int a[256]; // 256 * sizeof(int) = 1024 bytes
	int n;
	cout << "Please enter number of numbers: ";
	cin >> n;

	cout << "Please enter " << n << " numbers: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
