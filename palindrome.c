#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter string: ");
    fgets(str, 1000, stdin);
    int l = 0, f = 1;
    int r = strlen(str) - 2;
    while (l < r)
    {
        if (str[l] != str[r])
        {
            // f=0;
            printf("%s is not a paindrome", str);
            break;
        }
        l++;
        r--;
    }
    printf("%s is a paindrome", str);
    return 0;
}