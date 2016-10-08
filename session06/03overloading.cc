void f() { cout << "hello"; } // f_v
void f(int x) { cout << x*2; } // f_i functions mangle to unique names
void f(int a, int b) {}

//ambiguous: both functions g can be called ()
void g() {}
void g(int x = 0) {}



int main() {
	f();
	f(2);
	f(3, 2);
	f(3.2,2.5); // legal? YES
	f(2,2,3); // NOT LEGAL (wrong number of parameters)
	f("hello", 5);
}
