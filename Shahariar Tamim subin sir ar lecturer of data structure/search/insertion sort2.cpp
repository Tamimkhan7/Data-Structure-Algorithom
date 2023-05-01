#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int i, j, p;
    for (i = 0; i < n; i++)
    {
        p = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > p)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = p;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertion_sort(arr, n);
}