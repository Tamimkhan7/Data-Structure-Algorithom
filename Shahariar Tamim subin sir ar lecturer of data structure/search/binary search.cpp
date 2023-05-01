#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // in this line we can get input from user
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    int l = 0, r = n - 1;
    int x;
    cin >> x;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << x << " Found" << endl;
            return 0;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << x << "Not found" << endl;
}