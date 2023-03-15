#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pref_sum = 0, res = 0, sum;
    cin >> n;
    int a[n];
    cout << "Enter array ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter sum: ";
    cin >> sum;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        pref_sum += a[i];
        if (pref_sum == sum)
        {
            cout << "Yes";
        }
        if (s.find(pref_sum - sum) != s.end())
        {
            cout << "Yes";
        }
        s.insert(pref_sum);
    }

    return 0;
}