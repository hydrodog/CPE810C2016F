#include <iostream>
#include <string>
using namespace std;

class Engine {
	int hp;
public:
	Engine(int hp) : hp(hp) {}
};

class Wheel {
private:
	int p;
public:
	Wheel(int p) : p(p) { cout << p << "W"; }
	~Wheel() { cout << "w"; }
};

class Vehicle {
private:
	int speed;
public:
	Vehicle(int v) : speed(v) { cout << "V!"; }
	~Vehicle() { cout << "v"; }
	void f() { cout << "speed = " << speed; }
	virtual void g() = 0;
};

class Car : public Vehicle {
private:
	Wheel w1,w2,w3,w4;
	Engine e;
	string color;
public:
	Car(int s, int hp, string color) :
		Vehicle(s), e(hp), w1(28), w2(28), w3(30), w4(30), color(color) { cout << "Car: " << color; }
	~Car() { cout << "dying"; }
	void g() { cout << "test"; }
};

int main() {
	Car c1(55, 128, "Red");
	c1.g();
}



