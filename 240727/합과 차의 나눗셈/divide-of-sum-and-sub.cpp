#include <iostream>
using namespace std;

int main() {
    int a, b;
    double res;

    cin >> a >> b;
    res = (double)(a + b) / (double)(a - b);
     
    cout.precision(2);
    cout << fixed << res;

    return 0;
}