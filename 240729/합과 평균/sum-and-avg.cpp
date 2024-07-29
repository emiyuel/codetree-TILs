#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout.precision(1);
    cout << fixed << a + b << ' ' << (double)(a + b) / 2;

    return 0;
}