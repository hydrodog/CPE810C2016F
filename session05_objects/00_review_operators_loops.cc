#include <iostream>
using namespace std;

int main() {

    int a = 3 / 2 + 4 / 3 + 4 / 5 - 3 / 5;
    int b = 6%3 + 7%3 + 9%3;
    cout << a << b << '\n'; // 21
    
    for (int i = 100; i > 0; i /= 3 + 1)
        cout << i;
    cout << '\n'; // 100 25 6 1
    for (int i = 100; i > 0; i = i / 3 + 1)
        cout << i;
    cout << '\n'; // 100 34 12 5 2
    return 0;
}
