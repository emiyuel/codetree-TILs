#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if ((a > b && b > c) || (c > b) && (b > a))
        cout << b;
    if ((b > a && a > c) || (c > a) && (a > b))
        cout << a;
    else
        cout << c;

    return 0;
}