// Given an array each element represents height of bars in histogram return LargestRectangleArea,
/* Idea is to consider an element as smallest bar in the rectangle and traverse on left until we find >= and on right >= elements and add that element to itself until conditon satifies */

#include <bits/stdc++.h>
using namespace std;

int LargestRectArea(int arr[], int n);

int main()
{
    int n;
    cout << " n :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << LargestRectArea(arr, n);

    return 0;
}

int LargestRectArea(int arr[], int n)
{
    stack<int> s;
    int res = 0;
    // we'll process the stack when we pop an item in stack which gives it prev smaller & curr elem is next smaller which popped curr elem
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i]) // we use prev smaller logic.
        {
            int tp = s.top();
            s.pop();
            int curr = arr[tp] * (s.empty() ? i : (i - s.top() - 1));
            res = max(res, curr);
        }
        s.push(i);
    }
    while (!s.empty()) // left over elements which doesn't have smaller on right
    {
        int tp = s.top();
        s.pop();
        int curr = arr[tp] * (s.empty() ? n : (n - s.top() - 1));
        res = max(res, curr);
    }
    return res;
}