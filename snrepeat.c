#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char st[100];
    scanf("%s", st);
    char freq[26] = {0};
    int i;
    for (i = 0; st[i] != '\0'; i++)
    {
        freq[st[i] - 'a']++;
    }
    for (i = 0; st[i] != '\0'; i++)
    {
        if (freq[st[i] - 'a'] == 1)
        {
            printf("%c", st[i]);
            exit(0);
        }
    }
    printf("-1");

    return 0;
}