#include <stdio.h>
int main()
{
    int n, i, l, r;
    printf("Enter size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter value for array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    l = 0;
    r = n - 1;
    int s = 0;
    s = arr[r] - arr[l];
    printf("Sum: %d", s);
    return 0;
}