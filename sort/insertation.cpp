#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    { // insertion algorithom in array
        cin >> arr[i];
        int x = arr[i];
        int j = i - 1;
        while (j >= 1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}