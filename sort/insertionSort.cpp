//Insertion sort

#include <bits/stdc++.h>
using namespace std;
void insertSort(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    insertSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

void insertSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
