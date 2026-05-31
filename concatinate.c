#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], id[50];
    char *p;
    printf("Enter name: ");
    fgets(name, 100, stdin);

    if (name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';

    printf("Enter id: ");
    scanf("%s", id);
    int i;
    for (i = 0; name[i] != '\0'; i++)
        name[i] = tolower(name[i]);

    char *first = strtok(name, " ");
    char *last = first;

    while ((p = strtok(NULL, " ")) != NULL)
        last = p;

    printf("%s_%s%s", first, last, id);

    return 0;
}