#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int weight = 13;
    double rate = 0.165;
    double moon = weight * rate;

    cout.precision(6);
    cout << weight << " * " << rate << " = " << moon << endl;
    
    return 0;
}