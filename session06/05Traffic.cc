#include <string>
#include <iostream>
using namespace std;
/*
Car: speed (55)
      color ("red")

Truck: speed (90)
      weight (18000.0)

			Bus: speed (28)
			numPassengers (20)

*/
// abstract class (abstract concept)
// what is shared between multiple concrete classes
class Vehicle {
private:
  int speed;	 // data should always be private!
public:
	Vehicle(int speed) : speed(speed) {}
	virtual double payToll() = 0; // pure virtual function
};

class Car : public Vehicle {
private:
	string color;
public:
  Car(int speed, string color) : Vehicle(speed), color(color) {}
	double payToll() { return 15; }
};

class Bus : public Vehicle {
private:
	int numPassengers;
public:
	Bus(int speed, int np) : Vehicle(speed), numPassengers(np) {}
	double payToll() { return 3; }
};

class Truck : public Vehicle {
private:
	double weight;
public:
	Truck(int speed, double w) : Vehicle(speed), weight(w) {}
	double payToll() { return 15*4; }
};

int main() {
	Car c(55, "red");
	Truck t(90, 18000.0);
	Bus b(44, 29 );
	// ILLEGAL	Vehicle v(55); // cannot create an instance of an abstract class

	cout << c.payToll() << "\n";
	cout << b.payToll() << "\n";
	cout << t.payToll() << "\n";

	Vehicle * v = &c;
	cout << v->payToll() << '\n';
#if 0
	switch(v->type) {
	case CAR: ...
	case BUS: ...
	case TRUCK: ...
		};
#endif
	
	//	Vehicle* vehicles[3];
	//	vehicles[0] = &t;

	//vehicles[0]->payToll();


	
}
