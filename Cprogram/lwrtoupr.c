#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    scanf("%s",name);
    int n = strlen(name);
    for(int i = 0;i < n;i++)
    {
        if (name[i]>=65 && name[i]<=90)
            name[i]+=32;
        else if(name[i]>=97 && name[i]<=122)
            name[i]-=32;
    }
    printf("%s",name);

    return 0;
}