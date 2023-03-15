#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of arr: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "Enter d: " << endl;
    cin >> d;
    // left rotate by d places
    Reverse(arr, 0, d - 1);
    Reverse(arr, d, n - 1);
    Reverse(arr, 0, n - 1);

    cout << "Left rotated array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}