#include <stdio.h>
#include <stdbool.h>

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
        printf("stack is full.\n");
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
        printf("Stack is empty.\n");
    }
}

int main()
{
    int size;
    printf("Enter size of Stack: ");
    scanf("%d", &size);
    int arr[size];
    int n;
    printf("Enter value To Calculate Factorial: ");
    scanf("%d", &n);
    int top = 0;
    char infix[100];
    scanf("%s", infix);
    char postfix[100];
    int curr = 0;
    int i = 0;
    while (infix[i] != '\0')
    {
        char ch = infix[i];
        if (ch != '+' || ch != '-' || ch != '*' || ch != '/' || ch != '(' || ch != ')')
        {
            postfix[curr] = ch;
            curr++;
        }
        else
        {
            if (isempty(top) == true || ch == '(')
            {
                push(arr, top, ch, size);
            }
            elif (ch == ')')
            {
                while (pop() == '(')
                {
                    if (pop() != '(')
                    {
                        postfix[curr] = pop();
                        curr++;
                    }
                }
            }
            else{
                if(ch == '')
            }
        }

        i++;
    }

    return 0;
}
