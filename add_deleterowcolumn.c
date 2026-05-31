#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, ch, pos;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\n1. Add Row");
    printf("\n2. Delete Row");
    printf("\n3. Add Column");
    printf("\n4. Delete Column");
    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1: // Add Row
        printf("Enter position (1-%d): ", r + 1);
        scanf("%d", &pos);

        if (pos < 1 || pos > r + 1)
        {
            printf("Invalid position!\n");
            return 0;
        }

        for (i = r; i >= pos; i--)
            for (j = 0; j < c; j++)
                a[i][j] = a[i - 1][j];

        printf("Enter %d elements for new row: ", c);
        for (j = 0; j < c; j++)
            scanf("%d", &a[pos - 1][j]);

        r++;
        break;

    case 2: // Delete Row
        printf("Enter row position to delete: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > r)
        {
            printf("Invalid position!\n");
            return 0;
        }

        for (i = pos - 1; i < r - 1; i++)
            for (j = 0; j < c; j++)
                a[i][j] = a[i + 1][j];

        r--;
        break;

    case 3: // Add Column
        printf("Enter position (1-%d): ", c + 1);
        scanf("%d", &pos);

        if (pos < 1 || pos > c + 1)
        {
            printf("Invalid position!\n");
            return 0;
        }

        for (i = 0; i < r; i++)
        {
            for (j = c; j >= pos; j--)
                a[i][j] = a[i][j - 1];

            printf("Enter element for row %d: ", i + 1);
            scanf("%d", &a[i][pos - 1]);
        }

        c++;
        break;

    case 4: // Delete Column
        printf("Enter column position to delete: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > c)
        {
            printf("Invalid position!\n");
            return 0;
        }

        for (i = 0; i < r; i++)
            for (j = pos - 1; j < c - 1; j++)
                a[i][j] = a[i][j + 1];

        c--;
        break;

    default:
        printf("Invalid choice!\n");
        return 0;
    }

    printf("\nResulting Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}