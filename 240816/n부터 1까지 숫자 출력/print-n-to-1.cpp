#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int i = n;
    while (i >= 1)
        cout << i-- << ' ';
    return 0;
}