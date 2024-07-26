#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int count;
    string command;
    list<int> linked_list;

    cin >> count;

    while (count)
    {
        cin >> command;
        int num = 0;

        if (command == "push_front")
        {
            cin >> num;
            linked_list.push_front(num);
        }
        if (command == "push_back")
        {
            cin >> num;
            linked_list.push_back(num);
        }
        if (command == "pop_front")
        {
            num = linked_list.front();
            linked_list.pop_front();
            cout << num << endl;
        }
        if (command == "pop_back")
        {
            num = linked_list.back();
            linked_list.pop_back();
            cout << num << endl;
        }
        if (command == "size")
        {
            num = linked_list.size();
            cout << num << endl;
        }
        if (command == "empty")
        {
            num = linked_list.size();
            if (num == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        if (command == "front")
        {
            num = linked_list.front();
            cout << num << endl;
        }
        if (command == "back")
        {
            num = linked_list.back();
            cout << num << endl;
        }
        count--;
    }
    return 0;
}