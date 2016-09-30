include <iostream>
using namespace std;

class Fraction {
    public:
        Fraction(int n = 0, int m = 0) : num(n), den(m) {
            
        }  
    
    private:
        const int num;
        const int den;
    
};

int main() {
    Fraction f1(1,2);
    Fraction f2;
    Fraction f3(1,3);
    //Fraction f4 = f1 + f2;
    Fraction f5(); // function prototype, not an object
    cout << f5;

}
