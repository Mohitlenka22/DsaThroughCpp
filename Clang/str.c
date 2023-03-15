#include <stdio.h>


struct sum
{
    int a,b;
 };

int add(struct sum *p);
void main()
{
    struct sum s;
    struct sum *p;
    p = &s;
    // scanf("%d%d",&p->a,&p->b);
    add(p);
}

int add(struct sum *p)
{
    scanf("%d%d",&p->a,&p->b);
    int res = p->a + p->b; //access and perform calcul in func body
    printf("%d",res);
}