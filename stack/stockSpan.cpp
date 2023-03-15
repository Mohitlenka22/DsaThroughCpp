#include <bits/stdc++.h>
using namespace std;

int stockSpan(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stockSpan(arr, n);
    return 0;
}

int stockSpan(int arr[], int n)
{
    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i]) // Remove all elems which are small or equals to current elem
            s.pop();
        cout << (s.empty() ? (i + 1) : (i - s.top())) << " "; // stack is empty it is greater elem so far so return i+1
        s.push(i);
    }
}

// 60 34 79 54 66 90
/*
 span of 1st element is always 1;

 span = index of curr elem - index of nearest max no. {if there is max elem on left side}
 span = index of curr elem + 1 {otherwise}

*/