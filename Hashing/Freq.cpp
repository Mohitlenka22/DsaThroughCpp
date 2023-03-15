#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,1,1,3,4};
    unordered_map <int,int> m;
    for(auto x : a)
        m[x]++;
    for(auto x : m)
        cout << x.first << " freq " << x.second <<endl;
    return 0;
}