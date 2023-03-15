// Factorial using stack.

#include <bits/stdc++.h>
using namespace std;

bool isfull(int *top, int size)
{
    if (*top == size)
        return true;
    return false;
}
bool isempty(int *top)
{
    if (*top == 0)
        return true;
    return false;
}
void push(int arr[], int *top, int x, int size)
{
    if (isfull(top, size) == false)
    {
        arr[*top] = x;
        *top = *top + 1;
    }
    else
    {
        cout << "stack is full." << endl;
    }
}
int pop(int arr[], int *top)
{
    if (isempty(top) == false)
    {
        int val = arr[*top - 1];
        *top = *top - 1;
        return val;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }
}

int main()
{
    int size;
    cout << "Enter size of Stack: ";
    cin >> size;
    int arr[size];
    int n;
    cout << "Enter value To Calculate Factorial: ";
    cin >> n;
    int top = 0;
    for (int i = n; i >= 1; i--)
    {
        push(arr, &top, i, size);
    }
    int pro = 1;
    for (int i = 1; i <= n; i++)
    {
        int f = pop(arr, &top);
        pro *= f;
    }
    cout << "The Factorial of " << n << " " << pro;
    return 0;
}
