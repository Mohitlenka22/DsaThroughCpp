#include <bits/stdc++.h>
using namespace std;

int Remove_dup(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = Remove_dup(a, n);
    for (int i = 0; i < res; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

int Remove_dup(int a[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[res - 1])
        {
            a[res] = a[i];
            res++;
        }
    }
    return res;
}