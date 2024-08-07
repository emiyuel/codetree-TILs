#include <iostream>

using namespace std;

int main() {
    int mid, final;

	cin >> mid, final;
    
    if (mid >= 90)
    {
        if (final == 100 || final >= 95)
		    cout << 10;
	    else if (final >= 90)
		    cout << 5;
	    else
		    cout << 0;
    }
    else
        cout << 0;
	
    return 0;
}