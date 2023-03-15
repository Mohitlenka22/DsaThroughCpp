#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,6};
    int b[6] = {3,4,50,1,3,4};

    unordered_set <int> s(a,a+5);
    for(int i = 0;i<6;i++)
        s.insert(b[i]);
    for(auto x:s)
        cout << x << endl;


    return 0;
}