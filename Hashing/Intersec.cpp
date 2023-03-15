#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,5,3};
    int b[6] = {1,2,3,4,4,3};
    int res=0;
    unordered_set <int> s(a,a+5);
    for(int i = 0 ;i<6;i++)
    {
        if(s.find(b[i]) != s.end())
        {
            res++;
            s.erase(b[i]);
        }
    }
    cout << res;

    return 0;
}