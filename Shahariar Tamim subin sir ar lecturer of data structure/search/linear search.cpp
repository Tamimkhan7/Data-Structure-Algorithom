#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // this is main algorithm
    int c = 0, x;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        cout << x << " Not Found " << endl;
    else
        cout << x << " Found " << i << endl;
}