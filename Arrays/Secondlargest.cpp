#include <bits/stdc++.h>
using namespace std;
int sec_largest(int[], int);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = sec_largest(arr, n);
    cout << arr[ans];
    return 0;
}

int sec_largest(int arr[], int n)
{
    int largest = 0;
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

// 4 3 12 5
/*
    res = -1 -> res = i
    a[i] > a[res] -> res = i
    a[i] == a[res] -> nothing
    a[i] < a[res] -> nothing
*/