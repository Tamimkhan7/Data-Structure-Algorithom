#include <bits/stdc++.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("myfile.txt", "r");

    if (file == NULL)
    {
        cout << "Error in opening file" << endl;

        exit(1); // file excute error in the program that means
    }

    exit(0); // that means file excuted sucessful
}