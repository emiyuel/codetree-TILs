#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        cout << 31;
    else if (n == 2)
        cout << 28;
    else
        cout << 30;
        
    return 0;
}