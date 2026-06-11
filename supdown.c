#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char st[100];
    scanf("%s", st);
    int l = 0;
    int r = strlen(st) - 1;
    while (l < r)
    {
        if (!isalpha(st[l]))
        {
            l++;
        }
        else if (!isalpha(st[r]))
        {
            r--;
        }
        else
        {
            char temp = st[l];
            st[l] = st[r];
            st[r] = temp;
            l++;
            r--;
        }
    }
    printf("%s", st);
    return 0;
}