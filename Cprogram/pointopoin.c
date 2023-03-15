#include <stdio.h>

int main()
{
    int a = 10;
    int *p1;
    p1 = &a;
    printf("%d\n",*p1);
    int **p2;
    p2 = &p1;
    printf("%d\n", **p2);

    return 0;
}