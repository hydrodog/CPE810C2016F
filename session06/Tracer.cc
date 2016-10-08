#include <iostream>
using namespace std;

class Tracer {
private:
	const char*funcName;
public:
	Tracer(const char* funcName) : funcName(funcName) {
		cout << "Entering " << funcName << '\n';
	}
	~Tracer() {
		cout << "Leaving " << funcName << '\n';
	}
};

void g() {
	Tracer t("g");
}

void f() {
	Tracer t("f");
	g();
}

int main() {
	Tracer t("main");
	f();
	f();
}
