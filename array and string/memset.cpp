#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[50];
    strcpy(str, "Hello world!"); // using copy function
    cout << "Before memset : " << str << endl;

    memset(str, '0', strlen(str)); // jekono akta word diye sob gulake muce pela
    cout << "After memset : " << str << endl;
}