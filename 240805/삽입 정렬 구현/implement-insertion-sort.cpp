#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, element, key;
    vector<int> sort;

    cin >> n;

    while (n > 0)
    {
        cin >> element;
        sort.push_back(element);
        n--;
    }

    for (int i = 1; i < sort.size(); i++)
    {
        int j = i - 1;
        key = sort[i];
        while (j >= 0 && sort[j] > key)
        {
            sort[j + 1] = sort[j];
            j--;
        }
        sort[j + 1] = key;
    }

    for (int i = 0; i < sort.size(); i++)
        cout << sort[i] << ' ';

    return 0;
}