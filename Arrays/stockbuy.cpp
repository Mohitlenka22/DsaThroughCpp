#include <bits/stdc++.h>
using namespace std;
int stock(int arr[],int n);

int main()
{
    int n;
    cin >> n;
    int arr[n]; //prices array
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int ans = stock(arr,n);
    cout << ans;
}

int stock(int arr[],int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            profit+=(arr[i] - arr[i-1]);
    }
    return profit;
}