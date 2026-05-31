#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], n, i, j;
    int d1 = 0, d2 = 0, diff;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        d1 = d1 + a[i][i];
        d2 = d2 + a[i][n - i - 1];
    }

    diff = abs(d1 - d2);

    printf("Diagonal Difference = %d", diff);

    return 0;
}