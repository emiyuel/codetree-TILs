#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int i = a;
    while (i <= b)
    {
        if (!(i % 2))
            cout << i << ' ';
        i++;
    }
    return 0;
}