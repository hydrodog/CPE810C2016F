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
//  	memcpy(s, orig.s, size);
  }
  void operator =(const String& orig) {
  	if (this != &orig) {
		delete [] s;
  		size = orig.size;
  		s = new char[size];
  		for (size_t i = 0; i < size; ++i)
  	  		s[i] = orig.s[i];
  	}
  }
};

void f() {
	String s1("a");
}

void g(String s) {}

String h() { String ans("abc");  return ans; }
int main() {
//	for (int i = 0; i < 2000000000; i++)
//		f();
	cout << sizeof(size_t) << '\n'; // how big is size_t? I forget...
	String s1;
	String s2("abcd");
	String s3 = "abcd"; // also calls String( ...  )
	String s4(5000000000UL);
	cout << s1 << '\n';
	cout << s2 << '\n';
	String s5(s2); // s5 is a copy of s2 (calls copy constructor)
	String s6 = s2; // calls copy constructor
	String s7("def");
	s6 = s7;
	g(s6); // make a copy (pass by value)
	s6 = h();
	s6 = s6;

/*
	In general, you cannot predict when you will copy a string to itself such as:
	String a[10];
	String*p = &a[0];
	String*q = &a[9];

	while (true) {
		*p = *q;
		p++;
		q--;
	}
*/



}