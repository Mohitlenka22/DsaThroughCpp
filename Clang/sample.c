#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int ans = fact(n);
    printf("%d",ans);

    return 0;
}

int fact(int n)
{
    if (n==0)
        return 1;
    else 
        return n*fact(n-1);

}
