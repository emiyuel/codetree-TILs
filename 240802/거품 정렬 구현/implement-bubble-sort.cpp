#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, element;
    vector<int> sort;

    cin >> n;

    while (n > 0)
    {
        cin >> element;
        sort.push_back(element);
        n--;
    }

    for (int i = 0; i < sort.size() - 1; i++)
    {
        for (int j = 0; j < sort.size() - 1 - i; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                element = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = element;
            }
        }
    }

    for (int i = 0; i < sort.size(); i++)
        cout << sort[i] << ' ';

    return 0;
}