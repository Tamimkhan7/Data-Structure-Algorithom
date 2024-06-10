#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator it;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    for (auto it : v)
    {
        cout << it << endl;
    }
}