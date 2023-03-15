#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pref_sum = 0, res = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            a[i] = -1;
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        pref_sum += a[i];
        if (pref_sum == 0)
        {
            res = i + 1;
        }
        if (m.find(pref_sum) == m.end())
            m.insert({pref_sum, i});
        if (m.find(pref_sum) != m.end())
            res = max(res, i - m[pref_sum]);
    }

    cout << res;

    return 0;
}