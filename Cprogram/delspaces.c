#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int l = strlen(s);
    for(int i = 0 ;i<l;i++)
    {
        if(s[i] == ' ')
        {
            for(int j=i;i<l;j++)
            {
                s[j+1] = 'k';
            }
            l--;
        }

    }
    printf("%s",s);
}