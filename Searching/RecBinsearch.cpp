#include <bits/stdc++.h>
using namespace std;

int binsearch(int a[], int low, int high, int x);

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter key: ");
    scanf("%d", &x);
    int low = 0, high = n - 1;
    int res = binsearch(a, low, high, x);
    cout << "res " << res;

    return 0;
}

int binsearch(int a[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;

    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        return binsearch(a, low, mid - 1, x);
    else
        return binsearch(a, mid + 1, high, x);
}