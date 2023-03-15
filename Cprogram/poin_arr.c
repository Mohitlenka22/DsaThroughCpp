#include <stdio.h>

int main()
{
    int a[3]={1,2,3};
    int *ptr[3];
    for(int i = 0 ;i < 3;i++)
    {
        ptr[i]=&a[i];
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ",*ptr[i]);
    }

    return 0;
}