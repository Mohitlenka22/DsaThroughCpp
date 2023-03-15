#include <bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = max_diff(arr, n);
    cout << ans;

    return 0;
}

int max_diff(int arr[], int n) // arr[j]-arr[i] if j>i
{
    int res = arr[1] - arr[0];
    int minval = arr[0]; // it keep tracks arr[i]
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minval);
        minval = min(arr[j], minval);
    }
    return res;
}