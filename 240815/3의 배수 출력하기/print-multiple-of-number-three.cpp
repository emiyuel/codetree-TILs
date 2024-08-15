#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 1;

    cin >> n;
    while (a <= n)
    {
        if (a % 3 == 0)
        {
            cout << a << ' ';
            a += 3;
        }
        else
            a += 1;
    }
    return 0;
}