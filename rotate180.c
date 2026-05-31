#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix after 180 degree rotation:\n");

    for (i = r - 1; i >= 0; i--)
    {
        for (j = c - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}