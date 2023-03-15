#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=a[0],res=1;
    for(int i=1;i<5;i++)
    {
        if (a[i]<a[res-1])
        {
            for(int j = i;j<n;j++)
            {
                temp = a[j];
                a[j] = a[res-1];
                a[res-1] = temp; 

            }
        }
        res++;
    }
    for(int i =0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}