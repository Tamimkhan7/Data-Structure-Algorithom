#include <bits/stdc++.h>
using namespace std;

void allpossiblesubset(int ar[], int n)
{
    int c = pow(2, n); // 2^n that is formula for subset
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                cout << ar[j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    allpossiblesubset(ar, n);
}