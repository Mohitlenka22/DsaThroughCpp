// Given a matrix find Largest rectangle area formed with 1's in matrix it is a binary matrix consists of 1's and 0's

#include <bits/stdc++.h>
using namespace std;

int LargestRectArea(int arr[], int n);
int LargestMat(int **matrix, int n, int m);

int main()
{
    int n, m;
    cin >> n >> m;
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << LargestMat(matrix, n, m);
    return 0;
}

int LargestRectArea(int arr[], int n)
{
    stack<int> s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            int tp = s.top();
            s.pop();
            int curr = arr[tp] * (s.empty() ? i : (i - s.top() - 1));
            res = max(res, curr);
        }
        s.push(i);
    }
    while (!s.empty())
    {
        int tp = s.top();
        s.pop();
        int curr = arr[tp] * (s.empty() ? n : (n - s.top() - 1));
        res = max(res, curr);
    }
    return res;
}

int LargestMat(int **matrix, int n, int m)
{
    int res = LargestRectArea(matrix[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != 0) // == 1 also written like this
                matrix[i][j] += matrix[i - 1][j];
        }
        int curr = LargestRectArea(matrix[i], m);
        res = max(res, curr);
    }
    return res;
}