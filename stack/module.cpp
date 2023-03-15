#include <bits/stdc++.h>
int arr[3], top = 0;
#define MAX 3

bool isfull()
{
    if (top == MAX)
        return true;
    return false;
}
bool isempty()
{
    if (top == 0)
        return true;
    return false;
}
void push(int x)
{
    if (isfull() == false)
    {
        arr[top] = x;
        top++;
    }
    else
    {
        cout << "stack is full." << endl;
    }
}
int pop()
{
    if (isempty() == false)
    {
        int val = arr[top - 1];
        top--;
        return val;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }
}

int peek()
{
    if (isempty() == false)
    {
        return arr[top - 1];
    }
    else
    {
        cout << "stack is empty." << endl;
    }
}

int size()
{
    return top;
}

// while (true)
// {
//     cout << "Enter option: \n 1.push \n 2.pop \n 3.peek \n 4.size \n 5.exit. \n";
//     int option;
//     cin >> option;
//     switch (option)
//     {
//     case 1:
//         int x;
//         cout << "Enter value: ";
//         cin >> x;
//         push(x);
//         break;
//     case 2:
//         cout <<"The value is " << pop() << endl;
//         break;
//     case 3:
//         cout <<"The value is " << peek() << endl;
//         break;
//     case 4:
//         cout <<"The size is " <<  size() << endl;
//         break;
//     case 5:
//         exit(0);
//     }
// }