#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please enter number of numbers: ";
	cin >> n;
	int a[n]; // this is "new" (5 years?) (uses dynamic memory, new and delete)

	int b[2 * 3 + 1]; // int b[7]; // determined at compile time

	cout << "Please enter " << n << " numbers: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
