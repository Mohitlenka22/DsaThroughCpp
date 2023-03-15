// Bubble_sort

#include <bits/stdc++.h>
using namespace std;
void Bubble(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Bubble(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
void Bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
