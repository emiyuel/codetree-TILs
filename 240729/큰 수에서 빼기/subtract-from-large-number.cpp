#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    
    if (a > b)
        cout << a - b;
    if (b > a)
        cout << b - a;
    if (b == a)
        cout << 0;
        
    return 0;
}