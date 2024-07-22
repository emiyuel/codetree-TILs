#include <iostream>
using namespace std;

int main() {
    double  a;

    cin >> a;

    a += 1.50;

    cout.precision(2);
    cout << fixed << a;

    return 0;
}