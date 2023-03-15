#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pref_sum = 0, res = 0;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = a[i] - b[i];
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        pref_sum += temp[i];
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