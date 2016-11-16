#include <iostream>
using namespace std;

class OutOfBounds {
private:
	int val;
public:
	OutOfBounds(int index) : val(index) {}
	friend ostream& operator<<(ostream& s, const OutOfBounds b) {
		return s << "Out of Bounds index=" << b.val << '\n';
	}
};

class MyArray {
private:
	int size;
	int* data;
public:
	MyArray(int size) : size(size), data(new int[size]) {}
	~MyArray() {
    delete [] data;
	}

	// readonly []
	int operator [](int index) const {
		if (index >= size || index < 0)
			throw OutOfBounds(index);
		return data[index];
	}
	// writable
	int& operator [](int index) {
		if (index >= size || index < 0)
			throw OutOfBounds(index);
		return data[index];
	}
};

int main() {
	MyArray a(100);
	for (int i = 0; i < 100; i++)
		a[i] = 5;


	// Stroustrup sez: DON"T DO THIS!!
	try {
		for (int i = 0; i < 1000; i++)
			a[i] = 6;
	} catch (OutOfBounds b) {
		cout << "done with loop\n";
	}

	try {
		a[102] = 99;
	} catch(OutOfBounds b) {
    cout << b;		
	}
	cout << "hello";
}
