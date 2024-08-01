#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

    int n, m;
    int idx = 0;
    string status;
    char command, element;

    cin >> n >> m;

    cin >> status;
    
    list<char> toast;

    // n 활용 x
    // while (status[idx] != '\0')
    // {
    //     toast.push_back(status[idx]);
    //     idx++;
    // }
    // n 활용
    while (idx < n)
    {
        toast.push_back(status[idx]);
        idx++;
    }
    
    // iterator를 list의 맨 뒤에 위치시킵니다.
    list<char>::iterator it = toast.end();

    while (m > 0)
    {
        cin >> command;
        if (command == 'L')
        {   
            // 빵들의 맨 앞이 아니라면 한 칸 앞으로 이동합니다.
            if (it != toast.begin())
                it--;
        }
        else if (command == 'R')
        {   
            // 빵들의 맨 뒤가 아니라면 한 칸 앞으로 이동합니다.
            if (it != toast.end())
                it++;
        }
        else if (command == 'D')
        {   
            // 빵들의 맨 뒤가 아니라면 바로 뒤에 있는 빵을 제거합니다.
            if (it != toast.end())
                it = toast.erase(it);
        }
        else if (command == 'P')
        {   
            cin >> element;
            // 현재 it위 위치에 식빵을 추가하고 한 칸 뒤로 이동합니다.
            toast.insert(it, element);
        }
        m--;
    }
    
    // toast에 들어있는 원소 값을 순서대로 출력합니다.
    for (it = toast.begin(); it != toast.end(); it++)
        cout << *it ;

    return 0;
}