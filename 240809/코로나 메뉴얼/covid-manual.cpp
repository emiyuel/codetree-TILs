#include <iostream>
using namespace std;
char manuel(char sym, int temp);

int main() {
    char sym1, sym2, sym3;
    char res1, res2, res3;
    int temp1, temp2, temp3;

    cin >> sym1 >> temp1;
    cin >> sym2 >> temp2;
    cin >> sym3 >> temp3;

    res1 = manuel(sym1, temp1);
    res2 = manuel(sym2, temp2);
    res3 = manuel(sym3, temp3);

    if ((res1 == res2 && res1 == 'A') || (res2 == res3 && res2 == 'A') || (res3 == res1 && res3 == 'A') || (res1 == res2 && res2 == res3 && res1 == 'A'))
        cout << 'E';
    else
        cout << 'N';

    return 0;
}

char manuel(char sym, int temp)
{
    char res;

    if (temp >= 37)
    {
        if (sym == 'Y')
            res = 'A';
        else
            res = 'B';
    }
    else
    {
        if (sym == 'Y')
            res = 'C';
        else
            res = 'D';
    }
    return (res);
}