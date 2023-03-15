#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {1,2,3,9,1,9};
    unordered_set <int> s(a,a+6);
    for(auto x:s)
        cout<<x<<endl;

    return 0;
}