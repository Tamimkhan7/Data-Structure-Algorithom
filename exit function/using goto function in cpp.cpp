#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
input:
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < 0)
        {
            goto input; // goto use means if condition is false then progam jump the other condition and check the next condition
        }
        sum += num;
    }

    cout << sum << endl;
}