#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            {
                printf("0");
                printf("\t");
            }
            else 
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}