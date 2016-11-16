#include <vector>
#include <list>
#include <map>
#include <string>
#include <iostream>
using namespace std;

void f(const list<int>& b) {
	long long sum = 0;
	for (list<int>::const_iterator i = b.begin(); i != b.end(); ++i) {
		sum += *i;
	}
	cout << sum;
}


int main() {
	vector<float> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	// not a good way.  Should not repeat the 10 constant
	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << '\n';

	for (vector<float>::iterator i = a.begin(); i != a.end(); ++i)
		cout << *i << ' ';
	cout << '\n';
	for (auto x : a) {
		cout << x << ' ';
	}
	
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
	cout << '\n';

	list<int> b;
	for (int i = 0; i < 1000000; i++)
		b.push_back(i);

#if 0
	vector<int> c;
	vector<int>::iterator first = c.begin();
	for (int i = 0; i < 1000000; i++)
		c.insert(first, i);
#endif

	f(b);

	map<string, string> prez;
	prez["George"] = "Washington"; // const char* --> string
	prez["George"] = "Bush";
	prez["Bill"] = "Clinton";
	prez["Barack"] = "Obama";
	prez["Donald"] = "Trump";

	cout << prez["George"] << '\n';

	for (map<string,string>::const_iterator i = prez.begin(); i != prez.end(); ++i) {
		cout << i->first << "==>" << i->second << '\n';
	}
	for (auto& x : prez) {
		x.second = "Fred";
	}

	for (auto x : prez) {
		cout <<  x.first << "==>" << x.second << '\n';
	}

 


	
}
