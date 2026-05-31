#include <stdio.h>

int main()
{
    int a[100], n, i;
    int count = 1, max = 1;

    printf("Enter size:");
    scanf("%d", &n);

    printf("Enter array elements :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            count++;
        else
            count = 1;

        if (count > max)
            max = count;
    }

    printf("%d", max);

    return 0;
}