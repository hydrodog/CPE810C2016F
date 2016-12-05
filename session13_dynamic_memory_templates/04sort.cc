#include <iostream>
#include <string>
using namespace std;

template<typename T>
void sort(T x[], int n) {

	for (int j = n-1; j >= 0; --j)
		for (int i = 0; i < j; ++i)
			if (x[i] > x[i+1]) {
				T temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			//swap without temp
//			x[i] = x[i] + x[i+1];
//			x[i+1] = x[i] - x[i+1];
//			x[i] = x[i] - x[i+1];
			}	
}

int main() {
	int a[] = {5, 4, 3, 2, 1};
	string b[] = {"hello", "goodbye", "yo", "test"};
	sort(a, sizeof(a)/sizeof(int));
	sort(b, 4);
	for (auto x : a)
	   cout << x << ' ';
	cout << '\n';
	for (auto x : b)
	   cout << x << ' ';
	cout << '\n';
}