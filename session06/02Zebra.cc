/*
	Every zebra should have name and age.
	we should count how many there are
*/
#include <string>
#include <iostream>
using namespace std;

class Zebra {
private:
	string name;
	int age;
	static int count; // class shared
public:
	// constructor.  Called whenever zebra is born
  Zebra(string name, int age) : name(name), age(age) {
		count++;
	}

	Zebra(string name) : name(name), age(0) {
		count++;
	}

	//destructor.  called just before zebra dies
	~Zebra() {
		count--;
		cout << "There are now only " << count << " zebras left!\n";
	}
#if 0
	//got rid of this one because it is ambiguous with static
	// method, can answer about a static (shared) variable
	int getCount() {
		return count;
	}
#endif

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		age = a;
	}
	static int getCount() {
		return count;
	}
};

//definition
int Zebra::count = 0;

void f() {
	Zebra c("Charlie", 5);
	cout << c.getAge() << '\n';
	c.setAge(4);
}

int main() {
	cout << Zebra::getCount() << '\n';
	Zebra a("Fred", 3);
	Zebra b("Alice", 2);
	f();
	//Can't do both	cout << a.getCount() << '\n';
	cout << a.getName() << '\n';
	cout << a.getAge() << '\n';
}
