int main() {
	// create an array of n elements
	int n;
	cin >> n;
	int a[n];

	// write 0 to all the elements as an array a[i]

	// print it out

	// write 1 to all the elements using a pointer

	// print it out using a pointer

	int* p = a;
	for (int count = n; count > 0; count--, p++)
		*p = count;

	// what will this do?

	// print it out using a pointer!

	// print it out backwards using a pointer!

	
	p = a;
	for (int count = n-1; count > 0; count-=2, p++)
		*p = count;
	
	//print it out

	p = a +9;
	for (int count = 5; count < n+5; count++, p--)
		*p = count;


}
	
