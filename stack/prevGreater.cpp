#include <bits/stdc++.h>
using namespace std;

void prevGreater(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    prevGreater(arr, n);

    return 0;
}

void prevGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
        int prevgreater = (s.empty() ? -1 : s.top());
        cout << prevgreater << " ";
        s.push(arr[i]);
    }
}