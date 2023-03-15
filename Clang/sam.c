#include <stdio.h>

int gcd(int a,int b);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res = gcd(a,b);
    printf("%d",res);
    return 0;
}

int gcd(int a,int b)
{
    // if(b==0)
    //     return a;
    // else 
    //    return gcd(b,a%b);
    int res  = a<b?a:b;
    while(res>0)
    {
        if(a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}