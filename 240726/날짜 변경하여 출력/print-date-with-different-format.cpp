#include <iostream>
using namespace std;

int main() {
    int mm, dd, yyyy;
    char c;

    cin >> yyyy >> c >> mm >> c >> dd;

    cout << mm << '-' << dd << '-' << yyyy;
    
    return 0;
}