#include <stdio.h>
int main()
{
    // char ch;
    // printf("Enter character:");
    // scanf("%c",&ch);
    int i, f = 0;
    char ch[100];
    printf("Enter string:");
    fgets(ch, sizeof(ch), stdin);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            f++;
        }
    }
    if (f > 0)
    {
        printf("Vowel used %d", f);
    }
    else
    {
        printf("Not used Vowel");
    }
    return 0;
}