#include <regex> // pattern matching library (C++11)
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main () {
  string s ("Testing, testing this is only a test.");
  smatch m;
	const char* pat = "t[^ ]*t[A-Za-z]*";
  regex e (pat);   // matches words that contain two t

  cout << "Target sequence: " << s << '\n';
  cout << pat << '\n';
  cout << "The following matches and submatches were found:\n";

  while (regex_search (s,m,e)) {
    for (auto x : m) cout << x << " ";
    cout << '\n';
    s = m.suffix().str();
  }
  return 0;
}
