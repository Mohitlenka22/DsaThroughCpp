#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int flag = 1;
    scanf("%s", str);
    int l = strlen(str);
    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("palindrome");
    else
        printf("not");

    return 0;
}