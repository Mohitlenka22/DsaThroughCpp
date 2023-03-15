#include <stdio.h>

struct Book
{
    char name[20];
    int pages;
    int price;
};

int main()
{
    struct Book b1;
    struct Book *p;
    p = &b1;
    scanf("%s%d%d",p->name,&p->pages,&p->price);
    printf("%s %d %d",p->name,p->pages,p->price);



}