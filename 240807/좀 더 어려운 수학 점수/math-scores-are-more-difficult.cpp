#include <iostream>

using namespace std;

int main() {
    int A_math, A_eng, B_math, B_eng;

	cin >> A_math >> A_eng >> B_math >> B_eng;
    
    if (A_math > B_math)
		cout << 'A';
	else if (A_math < B_math)
		cout << 'B';
	else if (A_eng > B_eng)
		cout << 'A';
    else
        cout << 'B';
	
    return 0;
}