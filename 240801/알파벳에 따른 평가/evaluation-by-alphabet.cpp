#include <iostream>
using namespace std;

int main() {
    char upper;

    cin >> upper;

    if (upper == 'S')
        cout << "Superior";
    else if (upper == 'A')
        cout << "Excellent";
    else if (upper == 'B')
        cout << "Good";
    else if (upper == 'C')
        cout << "Usually";
    else
        cout << "Effort";

    return 0;
}