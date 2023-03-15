// Merging two sorted arrays....

#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int n1, int n2);

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int j = 0; j < n2; j++)
        cin >> b[j];
    merge(a, b, n1, n2);

    return 0;
}

void merge(int a[], int b[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n1)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n2)
    {
        cout << b[j] << " ";
        j++;
    }
}