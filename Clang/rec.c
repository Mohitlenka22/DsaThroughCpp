#include <stdio.h>
int fib(int n);
int indir(int n);

int main()
{
    int i,c=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fib(c));
        c++;
    }


    return 0;
}

int indir(int n)
{
    fib(n);
}

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return indir(n-1)+indir(n-2);

}

