#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int ans = kadane(arr,n);
    cout << ans;

}

int kadane(int arr[],int n)
{
    int res = arr[0];
    int maxendingSum = arr[0];
    for (int i = 1;i<n;i++)
    {
        maxendingSum = max(maxendingSum+arr[i],arr[i]);
        res = max(res,maxendingSum);
    }
    return res;
}