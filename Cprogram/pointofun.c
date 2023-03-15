#include <stdio.h>

void hello()
{
    printf("Hello world");
}
int main()
{
    void(*ptr)();
    ptr = hello;
   (*ptr)();

    return 0;
}