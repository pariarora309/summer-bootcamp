#include <stdio.h>
#include <string.h>

int main()
{
    char s[200], p[50], ch;
    int i, n;
    printf("Enter string: ");
    scanf("%s", s);
    printf("Enter pattern: ");
    scanf("%s", p);
    printf("Enter character: ");
    scanf(" %c", &ch);

    n = strlen(p);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (strncmp(&s[i], p, n) == 0)
        {
            printf("%c", ch);
            i = i + n - 1;
        }
        else
            printf("%c", s[i]);
    }

    return 0;
}