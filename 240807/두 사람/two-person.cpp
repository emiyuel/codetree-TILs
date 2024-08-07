#include <iostream>

using namespace std;

int main() {
    int year1, year2;
    char sex1, sex2; 

    cin >> year1 >> sex1 >> year2 >> sex2;

    cout << ((year1 >= 19 && sex1 == 'M') || (year2 >= 19 && sex2 == 'M'));

    return 0;
}