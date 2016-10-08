class Vector3d {




};

int main() {
	Vector3d a(1,0,0);
	Vector3d b(2.5,0.5,-1.5);
	Vector3d c = a + b; // addition     friend
	Vector3d d = a - b; // subtraction
	Vector3d e = -c; // negation
	Vector3d f; // (0,0,0)

	cin >> f; // read in vector from keyboard 1.5 2.5 0
  cout << f;
	// friend binary operator
	//Fraction operator +(Fraction a, Fraction b)

	// friend unary operator
	//Fraction operator -(Fraction a)

	// implement all of these
	double p = a * b;
	p = dot(a,b); // symmetric friend function
	p = a.dot(b); // asymmetric (method, or member function)
	p = Vector3d::dot(a,b);
	
	double mag = c.mag(); // square root (x*x+y*y+z*z)
	double magsq = c.magsq(); // x*x+y*y+z*z

  cout << Vector3d::count() << "\n"; // print how many vectors there are	
}
