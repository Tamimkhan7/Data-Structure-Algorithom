#include <bits/stdc++.h>
using namespace std;
int main()
{ // ai program tay time complexity kemon check kora hocce, total time complexity in the program B(1)
    int n;
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i; // darar formula ai use korci
    }
    cout << result << endl;
}