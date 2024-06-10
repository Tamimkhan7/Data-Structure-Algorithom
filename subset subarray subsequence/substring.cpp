#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s;
    int len = s.size(); // detarmine the string size
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            ss = s.substr(i, j + 1);
            cout << ss << endl;
        }
    }
}