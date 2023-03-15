#include <bits/stdc++.h>
using namespace std;

int Majority(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = Majority(arr, n);
    cout << ans;
}

int Majority(int arr[], int n) // Murre's voting algorithm
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
            count++; // first phase returns majority
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[res] == arr[j])
            count++;
        if (count > n / 2) // second verifies whether majority or not
            return res;
    }
    return -1;
}