#include <iostream>
using namespace std;

int main() {
    int n;
    int area;

    cin >> n;
    
    area = n * n;

    cout << area;
    if (n < 5)
        cout << endl << "tiny";

    return 0;
}