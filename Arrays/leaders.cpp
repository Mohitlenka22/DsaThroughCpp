#include <bits/stdc++.h>
using namespace std;

// void leaders(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] >= arr[i])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == false)
//             cout << arr[i] << " ";
//     }
// }

void leaders(int arr[], int n)
{
    int curr_lead = arr[n - 1];
    cout << curr_lead << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > curr_lead)
        {
            curr_lead = arr[i];
            cout << curr_lead << " ";
        }
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
    leaders(arr, n);

    return 0;
}