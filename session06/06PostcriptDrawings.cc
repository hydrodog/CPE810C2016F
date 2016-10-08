class Shape {
public:
	virtual void draw(string& s) = 0;
};

class Circle {
	// x,y, radius
public:
	void draw(string& s) {

	}

};

class Rect {
	// x,y, w, h
public:
	void draw(string& s) {

	}

};

class Line {
	// x1,y1,x2,y2
public:
	
	void draw(string& s) {

	}
};

int main() {
	string s;
	Line L1(0,0, 100, 100);
	L1.draw(s);
	Rect r1(300,400, 50, 100);
	r1.draw(s);
	Circle c1(200,100, 150);
	c1.draw(s);


	//send the same message to multiple objects
	// they all respond with the appropriate method
	// POLYMORPHISM
	Shape* shapes[3] = {
		&L1, &r1, &c1
	};

	for (int = 0; i < 3; i++)
		shapes[i].draw(s);

	cout << s << '\n';
}
