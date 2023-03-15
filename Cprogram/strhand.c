#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10],s2[10];
    scanf("%s%s",s1,s2);
    int ans = strcmp(s1,s2);
    printf("%d",ans);



    return 0;
}