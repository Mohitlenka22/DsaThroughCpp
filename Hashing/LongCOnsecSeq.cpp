#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set <int> s(a,a+n);
    for (auto x : s)
    {
        if (s.find(x - 1) == s.end())
        {
            int curr = 1;
            while (s.find(x + curr) != s.end())
                curr++;
            res = max(res, curr);
        }
    }
    cout << res;

    return 0;
}