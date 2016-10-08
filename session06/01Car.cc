/*
	Car has 4 wheels, 1 engine
	engine has hp rating (double)
	wheels have pressure rating (30psi) (int)



 */
#include <iostream>
using namespace std;

class Wheel {
private:
	int m_pressure;
public:
	Wheel(int p) : m_pressure(p) {}
	friend ostream& operator <<(ostream& s, Wheel w) {
		return s << "I am a wheel.  My pressure=" << w.m_pressure;
	}
};

class Engine {
private:
	double m_hp;
public:
	Engine(double hp) : m_hp(hp) {}
	friend ostream& operator <<(ostream& s, Engine e) {
		return s << "I am an engine.  My HP = " << e.m_hp;
	}
};

class Car {
private:
	Wheel m_w1, m_w2, m_w3, m_w4;
	//possible:	Wheel wheels[4];
	Engine m_e;
public:
  Car(double hp, int tirePressure) : m_e(hp),
																		 m_w1(tirePressure),
																		 m_w2(tirePressure),
																		 m_w3(tirePressure),
																		 m_w4(tirePressure) {
	}
	friend ostream& operator <<(ostream& s, Car c) {
		return s << "I am a car:\n" <<
			c.m_e << c.m_w1 << c.m_w2 << c.m_w3 << c.m_w4;
	}
};

int main() {
	Car c1(250.5, 30);
	cout << c1;
}
