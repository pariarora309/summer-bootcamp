#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);
    int i;
    printf("String without vowel: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        printf("%c", str[i]);
    }
}