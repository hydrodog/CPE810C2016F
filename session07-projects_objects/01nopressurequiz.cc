/*
	Write a class to make the following main work
	


*/

int main() {
	Vector3d v1(1.5, 2.0); // z= 0
	Vector3d v2 = v1 * 3; // multiply by scalar
	Vector3d v3 = v2 - v1;
	double d1 = dot(v1,v2);
	double d2 = Vector3d::dot(v1,v2);
	cout << v1 << '\n';

	cin >> v3;
	cout << v3 + v1;
}
