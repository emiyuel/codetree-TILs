#include <iostream>
using namespace std;

int main() {
    int h, w;
    int b;

    cin >> h >> w;
    
    b = (10000 * w)/(h * h);

    cout.precision(1);
    cout << fixed << b;
    if (b >= 25)
        cout << endl << "Obesity";

    return 0;
}