#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int c = 0;
    for (int i = 1; i * 2 < x; i *= 2)
    {
        c++;
    }
    cout << c << endl;
}   