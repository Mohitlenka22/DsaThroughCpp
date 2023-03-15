// Array contains half left sorted and half right sorted...

#include <bits/stdc++.h>
using namespace std;
void mergeSort(int a[], int l, int m, int r);

int main()
{
    int n, l, m, r;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++)
        cin >> a[i];
    cin >> l >> m >> r;
    mergeSort(a, l, m, r);
    
    return 0;
}

void mergeSort(int a[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
        left[i] = a[i];
    for(int j = 0; j < n2; j++)
        right[j] = a[m + j + 1];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
    for (int t = 0;t< n1+n2 ; t++)
        cout << a[t] << " ";

}
