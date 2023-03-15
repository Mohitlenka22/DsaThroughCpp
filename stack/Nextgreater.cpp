#include <bits/stdc++.h>
using namespace std;

vector<int> Nextgreater(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> res = Nextgreater(arr, n);
    for (int i : res)
        cout << i << " ";
    return 0;
}

vector<int> Nextgreater(int arr[], int n) // we process arr in reverse order.
{
    stack<int> s;
    vector<int> v;
    s.push(arr[n - 1]);
    v.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
        int nextgr = (s.empty() ? -1 : s.top());
        v.push_back(nextgr);
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}