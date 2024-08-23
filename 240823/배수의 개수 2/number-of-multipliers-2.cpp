#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        if (num % 2 == 0)
            count++;
    }

    cout << count;

    return 0;
}