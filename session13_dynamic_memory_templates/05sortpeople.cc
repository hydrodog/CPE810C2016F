#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	int age;
	string firstName;
	string lastName;
public:
	Person(int a, const string& fname, const string& lname) : age(a), firstName(fname),lastName(lname) {}
	friend ostream& operator <<(ostream& s, const Person& p) {
		return s << p.firstName << " " << p.lastName << " " << p.age;
	}
};

template<typename T, typename Key>
void sort(T x[], int n, Key T::*key) {

	for (int j = n-1; j >= 0; --j)
		for (int i = 0; i < j; ++i)
			if (x[i].*key > x[i+1].*key) {
				T temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			}
}

int main() {
	Person people[] = {
	 	Person(25, "Ellen", "Buxbaum"),
	 	Person(40, "Dov", "Kruger"),
	 	Person(15, "Moshe", "Kruger"),
	 	Person(85, "Warren", "Buffet")
	 };
	 sort(people, sizeof(people)/sizeof(Person), &Person::age);
	 for (auto x : people)
	 	cout << x << ' ';
	 cout << '\n';
	 sort(people, sizeof(people)/sizeof(Person), &Person::firstName);
	 for (auto x : people)
	 	cout << x << ' ';
	 cout << '\n';

//	 	&Person::firstName, 
//	 	&Person::lastName, 

}