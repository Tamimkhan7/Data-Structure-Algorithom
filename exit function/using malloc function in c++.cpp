#include <bits/stdc++.h>
using namespace std;
int main()
{
    string *ptr = (string *)malloc(sizeof(string));
    cout << ptr << endl; // that was value address of  the ptr
    int ptr2 = (int)malloc(sizeof(int));
    cout << ptr2 << endl;
}