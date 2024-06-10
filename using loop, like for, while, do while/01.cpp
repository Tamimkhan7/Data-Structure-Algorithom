#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int c = 0;
    while (y % 2 == 0)
    {
        y = y / 2;
        c++;
    }
    cout << c << endl;
}