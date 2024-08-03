#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, element, min;
    vector<int> sort;

    cin >> n;

    while (n > 0)
    {
        cin >> element;
        sort.push_back(element);
        n--;
    }

    for (int i = 0; i < sort.size() - 2; i++)
    {
        min = i;
        for (int j = i + 1; j < sort.size() - 1; j++)
        {
            if (sort[min] > sort[j])
                min = j;
        }
        element = sort[i];
        sort[i] = sort[min];
        sort[min] = element; 
    }

    for (int i = 0; i < sort.size(); i++)
        cout << sort[i] << ' ';

    return 0;
}