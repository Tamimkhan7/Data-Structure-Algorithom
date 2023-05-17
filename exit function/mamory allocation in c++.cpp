#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr = (int *)malloc(0); // we can be use any real value that show the one address

    if (ptr == NULL)
        cout << "NULL pointer" << endl;
    else
        cout << "Address = " << ptr << endl;
}