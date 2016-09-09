double f(double x) { return x*2; }


// x,y are passed in by value (copy)
// r and theta are passed back by reference
void rect2polar(double x, double y, double& r, double& theta) {
  r = sqrt(x*x + y*y);
	theta = atan2(y,x);
}

int main() {
	double x, y;
	cin >> x >> y;

	double r, theta;
	rect2polar(x, y, r, theta);

	cout << r << "," << theta << '\n';

}
