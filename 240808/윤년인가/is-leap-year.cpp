#include <iostream>
using namespace std;

int main() {
    int y;

    cin >> y;

    if (!(y % 100) && (y % 400))
        cout << "false";
    else if (!(y % 4))
        cout << "true";
    else
        cout << "false";

    return 0;
}