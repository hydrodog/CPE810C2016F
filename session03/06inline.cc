#include <iostream>
using namespace std;


// Rule 1. Code should always work the same way
// Rule 2. The compiler does not have to inline.  It's just a suggestion
// Rule 3. Inline anything that is only called once
// Rule 4. Don't inline anything big, it has almost no effect
// Rule 5. The more parameters, the slower to call.

//simple: if it's less than 3 lines, inline
inline int f(int x) { return x*x; }

long g(int n) {
	long sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

inline int h(int x); // function prototype

int main() {
	cout << f(2) << "\n";
	int a;
	cin >> a;
	cout << f(a) << '\n';
	cout << g(10000);
	cout << h(5);
}

int h(int x) {
	return x + x;
}
	
