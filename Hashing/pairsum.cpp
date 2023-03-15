#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int sum = 4;
    unordered_set <int> s;
    for(int i=0;i<5;i++)
    {
        if(s.find(sum-a[i]) != s.end())
            cout<<"Yes";
        s.insert(a[i]);
    }

    return 0;
}