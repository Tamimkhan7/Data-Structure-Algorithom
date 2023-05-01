#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, even[101];
    for (int i = 0; i < 101; i++)
    {
        even[i] = 0; // sob gula value ke 0 kore diyeci
    }
    for (int i = 0; i < 101; i += 2)
    {
        even[i] = 1; // sob gula value ke 1 kore diyeci
    }
    cin >> n;
    if (even[n]) // jeita even =0 oitai even number ar jeita even[1] oitai odd number
        cout << n << " is even number" << endl;
    else
        cout << n << " is odd number" << endl;
}