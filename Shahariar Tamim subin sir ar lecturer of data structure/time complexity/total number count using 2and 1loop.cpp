#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++)
    { // O(n^2)
        for (int j = 0; j < n; j++)
        {
            c++;
        }
    }
    // O(n)
    for (int i = 0; i < n; i++)
    {
        c++;
    }
    // total time complexity in the program is O(n^2)// jeita boro pabo oita besi bolbo
    cout << c << endl;
}