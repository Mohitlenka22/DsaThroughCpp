#include <bits/stdc++.h>
using namespace std;
int FirstOccur(vector<int> v, int low, int high, int x);
int LastOccur(vector<int> v, int low, int high, int x, int n);

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int low = 0, high = n - 1;
    int first = FirstOccur(v, low, high, x);
    if (first == -1)
        return 0;
    else
        cout << (LastOccur(v, low, high, x, n) - first + 1);

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