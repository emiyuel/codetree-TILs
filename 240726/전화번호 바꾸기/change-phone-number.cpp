#include <iostream>
#include <string>
using namespace std;

int main() {
    int front, back;
    char zero, one, c;

    cin >> zero >> one >> zero >> c >> front >> c >> back;

    cout << zero << one << zero << '-' << back << '-' << front;
    
    return 0;
}