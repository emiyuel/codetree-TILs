#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double a = 25.352;
    cout.precision(1);

    cout << a;
    return 0;
}