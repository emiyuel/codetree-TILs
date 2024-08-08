#include <iostream>
using namespace std;

int main() {
    int y;

    cin >> y;

    if (!(y % 4) || !(y % 100) && !(y % 400))
        cout << "true";
    else
        cout << "false";

    return 0;
}