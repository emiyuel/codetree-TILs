#include <iostream>
using namespace std;

int main() {
    int a, b;
    int res;

    cin >> a >> b;

    res = a >= b ? 1 : 0;
    cout << res << endl;
    res = a > b ? 1 : 0;
    cout << res << endl;
    res = a <= b ? 1 : 0;
    cout << res << endl;
    res = a < b ? 1 : 0;
    cout << res << endl;
    res = a == b ? 1 : 0;
    cout << res << endl;
    res = a != b ? 1 : 0;
    cout << res << endl;
    
    return 0;
}