#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        num.push_back(k);
    }

    // code ar main logic for the following functions
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> subset;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(num[j]);
            }
        }

        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i] << " ";
        }
        cout << endl;
    }
}
// code ta pore bujte hobe