#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (!(i % 2) || !(i % 3))
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }

    return 0;
}