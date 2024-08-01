#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    // 만약 a가 짝수라면
    if (!(a % 2))
        a /= 2;
    if (a % 2)
        a = (a + 1) / 2;
    
    cout << a;

    return 0;
}