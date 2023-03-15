#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            cout << "Yes" << mid;
            break;
        }
        else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

