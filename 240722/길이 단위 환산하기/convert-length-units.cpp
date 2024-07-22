#include <iostream>
using namespace std;

int main() {
    double n;

    cin >> n;

    cout.precision(1);
    cout << fixed << n * 30.48;

    return 0;
}