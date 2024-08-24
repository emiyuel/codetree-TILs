#include <iostream>
using namespace std;

int main() {
    int res3 = 0, res5 = 0, num;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        if (num % 3 == 0)
            res3++;
        if (num % 5 == 0)
            res5++;
    }

    cout << res3 << ' ' << res5;
    
    return 0;
}