#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter row and column:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter value in array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int temp;

    for (i = 0; i < r; i++)
    {
        for (j = i + 1; j < c; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (i = 0; i < r; i++)
    {
        int l = 0, r = c - 1;
        while (l < r)
        {
            temp = arr[i][l];
            arr[i][l] = arr[i][r];
            arr[i][r] = temp;
            l++;
            r--;
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