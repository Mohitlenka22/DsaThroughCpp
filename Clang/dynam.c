#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *ptr;
    ptr = (char *)malloc(10);
    if (ptr!=NULL)
    {
        strcpy(ptr,"Programming");
        printf("%s ",ptr);
        ptr =(char *)realloc(ptr,20);
        strcat(ptr,"jefle");
        printf("%s",ptr);
       
    }
    free(ptr);
    
}
