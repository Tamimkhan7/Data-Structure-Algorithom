#include <bits/stdc++.h>
using namespace std;
int gr(int n)
{
    if (n >= 80)
        return 5;
    else if (n >= 60)
        return 4;
    else if (n >= 50)
        return 3;
    else
        return 0;
}
int main()
{
    int n, result;
    cin >> n;
    result = gr(n);
    cout << result << endl;
}