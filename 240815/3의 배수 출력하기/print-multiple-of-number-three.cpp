#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 3;

    cin >> n;
    
    while (a <= n)
    {
        cout << a << ' ';
        a += 3;
    }
    return 0;
}