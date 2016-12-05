#include <iostream>  // bring in a library header file
using namespace std;

#define foo bar      // define macro symbol foo as bar (pretty much obsolete now, use const variables)
#if defined(foo)     // conditional compilation of a section of code
void f() {
cout << "testing\n";
}
#endif

#ifdef foo
void g() {
	cout << "testing again\n";
}
#endif

#define max(a,b) ((a)>(b)?(a):(b)) // old school use of macro, use inline function instead
int main() {
	f();
  g();
  cout << max(5,4) << '\n';
}
