#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string str;

    cin >> score;

    str = score == 100 ? "pass" : "failure";

    cout << str;
    
    return 0;
}