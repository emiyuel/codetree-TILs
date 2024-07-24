#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int count;
    string command;
    vector<int> int_vector;

    cin >> count;

    while (count)
    {


        cin >> command;
        int num = 0;

        if (command == "push_back")
        {
            cin >> num;
            int_vector.push_back(num);
        }
        if (command == "pop_back")
        {
            num = int_vector.back();
            int_vector.pop_back();
        }
        if (command == "get")
        {
            cin >> num;
            cout << int_vector[num - 1] << endl;
        }
        if (command == "size")
        {
            num = int_vector.size();
            cout << num << endl;
        }
        count--;
    }
    return 0;
}