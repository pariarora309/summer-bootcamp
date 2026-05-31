#include <Stdio.h>
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
    int sum[r];
    int s, m_s, m_i;
    for (i = 0; i < r; i++)
    {
        s = 0;
        for (j = 0; j < c; j++)
        {
            s += arr[i][j];
        }
        sum[i] = s;
        if (i == 0 || m_s < sum[i])
        {
            m_s = sum[i];
            m_i = i;
        }
    }
    printf("Row whose element sum is less than %d\n", m_s);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i != m_i)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}