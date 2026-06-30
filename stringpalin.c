#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char st[100];
    int i, j = 0;
    int len;
    int flag = 1;
    printf("enter string:");
    fgets(st, sizeof(st), stdin);
    char str[100];
    for (i = 0; st[i] != '\0'; i++)
    {
        if (isalnum(st[i]))
        {
            str[j] = tolower(st[i]);
            j++;
        }
        str[j] = '\0';
    }
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("It's a palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}