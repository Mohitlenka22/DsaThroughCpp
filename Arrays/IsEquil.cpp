#include <bits/stdc++.h>
using namespace std;
bool isEquil(int arr[],int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int res = isEquil(arr,n);
    if(res==1)
        cout << "yes";
    else cout<<"NO";

}

bool isEquil(int arr[],int n)
{
    int sum = 0;
    for (int i=0;i<n;i++)
        sum+=arr[i];
    for (int i=0;i<n;i++)
    {
        int l_sum=0;
        if(l_sum==sum-arr[i])
            return true;
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}