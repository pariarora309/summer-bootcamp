#include <stdio.h>
int main()
{
    int n, i, f = 0;
    printf("Enter range:");
    scanf("%d", &n);
    int hash[100] = {0};
    int arr[n];
    printf("Enter array value:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int hold = n / 4;
    printf("Answer: ");
    for (i = 0; i < n; i++)
    {
        if (hash[arr[i]] > hold)
        {
            printf("%d", arr[i]);
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("no frequency more that n/2");
    }
    return 0;
}