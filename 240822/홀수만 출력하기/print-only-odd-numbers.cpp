#include <iostream>
using namespace std;

int main() {
    int N;
    int num;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        
        if (num % 2 == 1 && num % 3 == 0)
            cout << num << endl;
    }
    
    return 0;
}