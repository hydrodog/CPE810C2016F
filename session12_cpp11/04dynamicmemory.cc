#include <iostream>
using namespace std;

class Person {
private:
	string firstName;
	string lastName;
	int age;
public:
	Person(const char* fName, const char* lName, int age) : firstName(fName), lastName(lName) {

	}	
	void f() {
		//*firstName='J';
	}

};



int main() {
	char* s1 = "Dov";
//	*s1 = "J"; // Jov

	const char* s2 = "Dov";  // s2 is a readonly pointer to char
//	*s2 = "J"; // error

	Person a("Dov", "Kruger", 30);
	Person b("Yu-Dong", "Yao", 40);
	a.f();
	char firstName[80], lastName[80];
	vector<Person> p;
	while (true) {
		cin >> firstName >> lastName;
		p.push_back(Person(firstName, lastName, 9));


	}
}




