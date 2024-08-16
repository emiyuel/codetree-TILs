#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int i = a;
    while (i <= b)
    {
        cout << i << ' ';
        i += 2;
    }
    return 0;
}