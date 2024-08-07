#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (((n % 2) && !(n % 3)) || (!(n % 2) && !(n % 5)))
        cout << "true";
    else
        cout << "false";
         
    return 0;
}