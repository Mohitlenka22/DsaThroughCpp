#include <bits/stdc++.h>
using namespace std;
int getSum(int arr[],int n,int l,int r);

int main()
{
    int n,l,r;
    cin >> n >> l >>r;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int ans = getSum(arr,n,l,r);
    cout << ans;
    
}

int getSum(int arr[],int n,int l,int r)
{
    int Prefix[n];
    Prefix[0]=arr[0];
    for (int i=1;i<n;i++)
        Prefix[i]=Prefix[i-1]+arr[i];
    for(int i=l;i<=r;i++)
    {
        if(l!=0)
            return Prefix[r]-Prefix[l-1];
        else return Prefix[r];
    }

}