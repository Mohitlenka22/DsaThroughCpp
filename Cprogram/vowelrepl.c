#include <stdio.h>
#include <string.h>

void main()
{
    char str[50],m;
    scanf("%s%c", str, &m);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = m;
        }
    }
    printf("%s",str);

    
}