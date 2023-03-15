#include <bits/stdc++.h>
using namespace std;
void partition(int a[], int p, int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];   
    }
    int p;
    cin >> p;
    partition(a, p, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

void partition(int a[], int p, int n)
{
    int l = 0, h = n - 1;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= a[p])
            temp[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[p])
            temp[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[l - i];
    }
}