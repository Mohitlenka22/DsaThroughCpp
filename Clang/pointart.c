#include <stdio.h>

int main()
{
    int n = 10;
    int *p1,*p2;
    p1 = &n;
    p2 = &n;
    // printf("%d\n",p);
    p2 = p2+3;
    int x = p2 - p1;
    printf("%d",x);
}