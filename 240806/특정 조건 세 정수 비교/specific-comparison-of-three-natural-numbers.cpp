#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    cout << (a < b && a < c) << ' ';
    cout << (a == b && a == c);
        
    return 0;
}