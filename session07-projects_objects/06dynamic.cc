int main() {
	int n;
	cin >> n;

	int* p = new int[n];  // allocate n integers



	delete [] p;


	int*q = new int;


	delete q; // must match


	// ILLEGAL TO DELETE SOMETHING THAT WAS NOT ALLOCATED USING NEW
	int a;
	delete &a; // ILLEGAL

  int* p = a;
	delete p;

	// ILLEGAL to delete something twice
	int*r = new int[100];
	delete [] r;
	delete []r; // illegal

	// ILLEGAL to write to a pointer that you didn't allocate

	int* s;

	*s = 1254125128; // once you write to the wrong memory, ANYTHING can happen
	// pointers are dangerous

	int b[10];
	b[19] = 125871257; // same thing

	
}
