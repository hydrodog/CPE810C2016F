#include <iostream>
using namespace std;

int fact(int n) {
	int prod = 1;
	for (int i = 2; i <= n; i++)
		prod = prod * i; // prod *= i;
  return prod;
}

// A recursive function
//  1. calls itself
//  2. contains a branch to stop
// n! = n * (n-1)!
int fact2(int n) {
	if (n <= 1)
		return 1;
	//	cout << n << " * ";
  return n * fact2(n-1);	
}

//



int main() {
  cout << fact2(5);	
}
