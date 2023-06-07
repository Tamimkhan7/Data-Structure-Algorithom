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
    // check the size of the vector
    cout << v.size() << endl;
    // all values in the program
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    it = v.begin(); // useing iterator function first value in the code
    it++;           // update iterator value
    cout << *it << endl;
}