#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a % 2)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    if (b % 2)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}