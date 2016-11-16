#ifndef DIVBYZERO_HH__
#define DIVBYZERO_HH__

#include <iostream>

class DivByZero {
private:
	const char* file;
	int linenum;
public:
	DivByZero(const char* file, int linenum) : file(file), linenum(linenum) {}

	friend std::ostream& operator <<(std::ostream& s, DivByZero d) {
		return s << "Divide by zero line=" << d.file << ": "  << d.linenum << '\n';
	}

};
#endif
