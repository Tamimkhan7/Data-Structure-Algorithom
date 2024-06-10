#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "The quick brown fox jumps over the lazy dog";
    char search[] = "fox";
    char *result = strstr(str, search); // this line is using pointer to string array
    if (result)                         // check the condition of the string array and return the string array
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
}//char *result = strstr(str, search)