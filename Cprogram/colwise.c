#include <stdio.h>

int main()
{
    int r,c,i,j,k;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
    
            sum+=a[j][i];
     
        }
            printf("%d ",sum);
    }
    



    return 0;
}

// 1 2
// 3 4