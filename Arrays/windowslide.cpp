#include <bits/stdc++.h>
using namespace std;

// maximum sum subarray with k elements
int maxSumWindow(int arr[], int n, int k)
{
    int curr = 0;
    for (int i = 0; i < k; i++)
    {
        curr += arr[i];
    }
    int res = curr;
    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i - k];
        res = max(res, curr);
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
    int k;
    cin >> k;
    cout << maxSumWindow(arr, n, k);

    return 0;
}

//Trapping rain water
//[1, 3, 5 ,2]

/*  1
    1
  1 1
  1 1 1
1 1 1 1
*/