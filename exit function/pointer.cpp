#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 100;
    int *pt = &x;
    // pt = x;
    cout << *pt << endl;
    cout << &x << endl;
    *pt = 200; // now x ar value is 200, because we above x value mention 100, x address tranforme into pt pointer
    cout << x << endl;
}