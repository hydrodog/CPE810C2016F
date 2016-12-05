#include <iostream>
using namespace std;

template<typename Precision>
class Vector3d {
private:
  Precision x,y,z;
public:	
  Vector3d(Precision x, Precision y, Precision z) : x(x), y(y), z(z) {}
  friend Vector3d<Precision> operator + (const Vector3d<Precision>& a,
  										 const Vector3d<Precision>& b) {
  	return Vector3d(a.x+b.x, a.y+b.y, a.z+b.z);
  }

  Vector3d operator -(const Vector3d& b) {

  }

};


int main() {
	Vector3d<int> a(1,2,3);
	Vector3d<double> b(1.5, 2.5, 5.2);
	Vector3d<double> c(1.2, 2.2, 2.1);
	Vector3d<double> d = b + c;
	Vector3d<double> e = b - c;

}