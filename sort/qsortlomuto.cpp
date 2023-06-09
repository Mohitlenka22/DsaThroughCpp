//Quick sort

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h);
int qsort(int arr[], int l, int h);

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    qsort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for(int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);

}

int qsort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        qsort(arr, l, p-1);
        qsort(arr, p+1, h);
    }
}