//Standard Template Library (STL)
#include <cstdint>
#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Elephant {
private:
	string name;
public:
	Elephant(const string& n) : name(n) {}
	friend ostream& operator<<(ostream& s, const Elephant& e) {
    return s << "Elephant my name is " << e.name << "\n";
	}
  void setName(const string& newName) {
		name = newName;
	}
	
};

int main() {
	uint64_t a;

	vector<int> b;
	for (int i = 0; i < 10; i++)
		b.push_back(i);

	for (int i = 0; i < 10; i++) {
		int v = b.back();
		cout << v  << ' ';
		b.pop_back();
	}
	cout << '\n';

	//	string x = string(1);
	
	vector<Elephant> elephants;
	for (int i = 0; i < 5; i++)
		elephants.push_back(Elephant("test"));
		//		elephants.push_back(Elephant(string("e") + to_string(42));

	cout << elephants[3];
	for (int i = elephants.size(); i >= 0; i--)
		cout << elephants[i];

	for (vector<Elephant>::iterator i = elephants.begin(); i != elephants.end(); ++i)
		cout << *i;

	for (vector<Elephant>::iterator i = elephants.begin(); i != elephants.end(); ++i)
		i->setName("Fred");
	const vector<Elephant> unchangeable;

	map<string, string> prezNames;
	prezNames["George"] = "Washington";
	prezNames["George"] = "Bush";
	prezNames["Bill"] = "Clinton";
	prezNames["Donald"] = "Trump";

	cout << prezNames["George"] << '\n';
	for (map<string,string>::iterator i = prezNames.begin(); i != prezNames.end(); ++i) {
		cout << i->first << "==>" << i->second << '\n';
	}
}
