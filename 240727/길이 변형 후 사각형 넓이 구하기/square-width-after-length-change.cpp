#include <iostream>
using namespace std;

int main() {
    int width, height;

    cin >> width >> height;
    width += 8;
    height *= 3;

	cout << width << endl;
    cout << height << endl;
    cout << width * height << endl;

	return 0;
}