#include <stdio.h>
#include <string.h>


int main()
{
    char s1[10],s2[10];
    scanf("%s%s",s1,s2);
    int res = strcmp(s1,s2);
    printf("%d ",res);
    printf("%d ",strlen(s1));
    char s[10];
    strcpy(s,s1);
    printf("%s ",s);
    printf("%s ",strcat(s1,s2));//s1=s1+s2
    printf("%s",s1);
    printf("%s ",strrev(s1));

    return 0;
}