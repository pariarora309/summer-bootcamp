#include <stdio.h>

int main()
{
    int a[100], freq[100];
    int n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = 1;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                freq[i]++;
                freq[j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (freq[i] < freq[j])
            {
                temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Frequency sorted array: ");

    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            for (j = 0; j < freq[i]; j++)
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}