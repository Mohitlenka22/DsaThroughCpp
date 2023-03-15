#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    // scanf("%s",s);
    gets(s);
    // char m;
    // scanf("%c",&m);
    int l =strlen(s);
    for (int i =0;i<strlen(s);i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        {
            s[i];
        
        }
        else{
            s[i]=' ';
        }
    }

    // printf("%s",s);
    puts(s);



    return 0;
}