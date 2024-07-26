#include <iostream>
using namespace std;

int main() {
    char c;

    double a, b;

    cin >> c >> a >> b;

    cout.precision(2);
    cout << c << endl << fixed << a << endl << b;
    return 0;
}