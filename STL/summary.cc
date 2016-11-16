#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<int> a; // for normal lists built in order, vector is most efficient
	a.push_back(5);

	list<int> b;
	for (int i = 0; i < 10; i++)
		b.push_back(i);
	for (list<int>::reverse_iterator i = b.rbegin(); i != b.rend(); ++i)
		cout << *i << ' ';
	cout << '\n';
}
