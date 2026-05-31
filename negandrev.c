#include <stdio.h>
int main()
{
    int r, c, i, j;
    int top, bottom, temp;
    printf("Enter row and column:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter array value:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i += 2)
    {
        for (j = 0; j < c; j++)
        {
            arr[i][j] = -arr[i][j];
        }
    }

    for (j = 0; j < c; j++)
    {
        top = 0;
        bottom = r - 1;
        while (top < bottom)
        {
            temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}