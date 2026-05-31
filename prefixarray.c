#include <stdio.h>
int main()
{
    int n, i, sum, l, r;
    printf("Enter range:");
    scanf("%d", &n);
    int arr[n];
    int prefix[n];
    // indexing of array is from 0 to n
    printf("Enter array values:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter array range sum start:");
    scanf("%d", &l);
    printf("Enter array range sum end:");
    scanf("%d", &r);
    prefix[n] = 0;
    // indexing 1 to n
    for (i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    sum = prefix[r] - prefix[l - 1];
    printf("Sum: %d", sum);
}