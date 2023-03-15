#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,greater<int>());
    for(auto x:a)
        cout << x << " ";
    
    return 0;
}