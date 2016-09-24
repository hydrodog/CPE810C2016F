class A {
public:
	void f() {}

	static void g() {}
private:
  int m; // data members, attribute  only you are allowed to look
	static int count; // shared by everyone in this class


protected:
	int z; // usually data and functions, only you and your children (inheritance)

};


A a1, a2, a3; // create 3 objects of type A




