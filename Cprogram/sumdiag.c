#include <stdio.h>

int main()
{
    int r,c,i,j,sum=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
                sum+=a[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}


// [[1,2]
//  [3,4]
// ]