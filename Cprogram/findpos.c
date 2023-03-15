#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    int k,flag=0;
    scanf("%d",&k);
    for (int i = 0;i < n;i++)
    {
        if (arr[i]==k)
        {
            printf("The element is found at index %d",i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Not found");
    return 0;
}