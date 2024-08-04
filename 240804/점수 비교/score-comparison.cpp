#include <iostream>
using namespace std;

int main() {
    int A_math, A_eng, B_math, B_eng;

    cin >> A_math >> A_eng >> B_math >> B_eng;

    cout << (A_math > B_math && A_eng > B_eng);
    
    return 0;
}