#include <iostream>
using namespace std;

int main() {
    int temp;

    cin >> temp;

    if (temp < 0)
        cout << "ice";
    else if (temp >= 100)
        cout << "vapor";
    else
        cout << "water";
        
    return 0;
}