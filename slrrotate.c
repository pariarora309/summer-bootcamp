#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], newstr[100];
    int n, i;
    scanf("%s", str);
    scanf("%d", &n);
    char d;
    scanf(" %c", &d);
    int len = strlen(str);
    n = n % len;
    if (d == 'L')
    {
        for (i = 0; i < len; i++)
        {
            newstr[i] = str[(i + n) % len];
        }
    }
    else if (d == 'R')
    {
        for (i = 0; i < len; i++)
        {
            newstr[i] = str[(i - n + len) % len];
        }
    }

    newstr[len] = '\0';
    for (i = 0; i < n && i < len; i++)
    {
        if (islower(newstr[i]))
            newstr[i] = toupper(newstr[i]);
        else if (isupper(newstr[i]))
            newstr[i] = tolower(newstr[i]);
    }
    printf("%s\n", newstr);
    return 0;
}