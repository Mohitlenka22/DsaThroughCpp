#include <bits/stdc++.h>
using namespace std;

// kadane's algorithm
int maxSumSubarray(int arr[], int n)
{
    int res = arr[0], maxEndSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEndSum = max(maxEndSum + arr[i], arr[i]);
        res = max(maxEndSum, res);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int NormalSubarrSum = maxSumSubarray(arr, n);

    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircularSum = arr_sum + maxSumSubarray(arr, n);

    cout << max(maxCircularSum, NormalSubarrSum) << endl;

    return 0;
}