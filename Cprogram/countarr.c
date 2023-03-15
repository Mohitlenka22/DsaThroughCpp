#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c_p=0,c_n=0,c_e=0,c_o=0,sum=0;
    for(int i = 0;i < n;i++)
    {
        if (arr[i]>0)
            c_p++;
        else if (arr[i]<0)
            c_n++;
        if (arr[i]%2==0)
            c_e++;
        else c_o++;
        sum+=arr[i];
    }

    printf("%d %d %d %d %d",c_p,c_n,c_e,c_o,sum);

    return 0;
}