#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
    int sum=0;
    if (argc != 3)
    {
        printf("error");
        exit(0);
    }
    for(int i = 1;i<argc;i++)
    {
        sum += atoi(argv[i]);
    }
    
    printf("%d",sum);

    return 0;
}