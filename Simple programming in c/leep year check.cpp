#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if ((n % 4 == 0 || n % 400 == 0) && n % 100 != 0)
        cout << "This year is Leep year" << endl;
    else
        cout << "This year is not leep year" << endl;
} 