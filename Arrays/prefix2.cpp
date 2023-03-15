#include <bits/stdc++.h>
using namespace std;
int max_freq(int l[],int r[],int n);



int main()
{
    int n;
    cin >> n;
    int l[n],r[n];
    for (int i = 0; i < n; i++)
        cin>>l[i];
    for (int i = 0; i < n; i++)
        cin>>l[i];
    max_freq(l,r,n)

}

int max_freq(int l[],int r[],int n)
{
    vector <int> arr[10]={0};
    for (int i=0;i<10;i++)
    {
        arr[l[i]]=1;
        arr[r[i]+1]=-1;
    }
    // int max=arr[0];
    // for(int i=0;i<1000;i++)
    // {
    //     arr[i]+=arr[i-1];
    //     // if (max)        
    // }
}