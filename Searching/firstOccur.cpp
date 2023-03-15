#include <bits/stdc++.h>
using namespace std;
int FirstOccur(vector<int> v, int low, int high, int x);
int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int low = 0, high = n - 1;
    int res = FirstOccur(v, low, high, x);
    cout << "res " << res;

    return 0;
}
int FirstOccur(vector<int> v, int low, int high, int x)
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
            if (mid == 0 || v[mid - 1] != v[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}