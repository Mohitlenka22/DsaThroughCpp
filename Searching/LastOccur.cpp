#include <bits/stdc++.h>
using namespace std;
int LastOccur(vector<int> v, int low, int high, int x, int n);

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int low = 0, high = n - 1;
    int res = LastOccur(v, low, high, x, n);
    cout << "res " << res;
}

int LastOccur(vector<int> v, int low, int high, int x, int n)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > x)
            high = mid - 1;
        else if (v[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || v[mid] != v[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}