#include <iostream>
using namespace std;

class String {
private:
  char* s;
  size_t size;
public:	
  String() : s(nullptr), size(0) {}
  String(const char* p) {
  	size_t sz;
  	for (sz = 0; p[sz] != '\0'; ++sz)
  		;
  	s = new char[sz];
  	size = sz;
  	for (size_t i = 0; i < size; ++i)
  		s[i] = p[i];
  }
  String(size_t sz) : s(new char[sz]), size(sz) {}
  friend ostream& operator <<(ostream& s, const String& str) {
  	for (int i = 0; i < str.size; ++i)
	  	s << str.s[i];
	return s;
  }
  ~String() {
  	delete [] s;
  }
  String(const String& orig) : size(orig.size), s(new char[size]) {
  	for (size_t i = 0; i < size; ++i)
  	  s[i] = orig.s[i];
  }
  String& operator =(const String& orig) {
  	if (this != &orig) {
		delete [] s;
  		size = orig.size;
  		s = new char[size];
  		for (size_t i = 0; i < size; ++i)
  	  		s[i] = orig.s[i];
  	}
  	return *this;
  }
  // C++11 only (move constructor)
  String(String&& orig) : s(orig.s), size(orig.size) {
  	orig.s = nullptr;
  }
};


String h() {
  return String("abc");
}


int main() {
	String s1;
	String s2("abcd");
	String s3 = "abcd"; // also calls String( ...  )
//	String s4(5000000000UL);
	cout << s1 << '\n';
	cout << s2 << '\n';
	String s5(s2); // s5 is a copy of s2 (calls copy constructor)
	String s6 = s2; // calls copy constructor
	String s7("def");
	s6 = s7;
	s6 = s6;
	cout << s6 << '\n';
}