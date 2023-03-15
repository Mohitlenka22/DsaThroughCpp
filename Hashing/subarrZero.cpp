#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,1,-2};
    unordered_set <int> s;
    int pref_sum = 0;
    for(int i=0;i<5;i++)
    {
        pref_sum += a[i];
        if(pref_sum == 0){cout<<"Yes";}
        if(s.find(pref_sum) != s.end())
            cout << "Yes";
        s.insert(pref_sum);
    }
    

    return 0;
}