#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a = 0, b = 1, c, i, n;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
}