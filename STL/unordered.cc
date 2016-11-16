#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main() {
	unordered_map<string, string> prez;
	prez["George"] = "Washington"; // const char* --> string
	prez["George"] = "Bush";
	prez["Bill"] = "Clinton";
	prez["Barack"] = "Obama";
	prez["Donald"] = "Trump";

	cout << prez["Bill"] << '\n';
	
	for (unordered_map<string,string>::const_iterator i = prez.begin(); i != prez.end(); ++i) {
		cout << i->first << "==>" << i->second << '\n';
	}
	for (auto& x : prez) {
		x.second = "Fred";
	}

	for (auto x : prez) {
		cout <<  x.first << "==>" << x.second << '\n';
	}

	
}
