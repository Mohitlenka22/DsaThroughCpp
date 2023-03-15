#include <bits/stdc++.h>
using namespace std;
int MinFlips(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    MinFlips(arr, n);
}

int MinFlips(int arr[], int n) //[0,0,1,1,0]
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "From " << i << " to ";
            else
                cout << i - 1 << endl;
        }
    }
    if (arr[n - 1] != arr[0])
        cout << n - 1;
}