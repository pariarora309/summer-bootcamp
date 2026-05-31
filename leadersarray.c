#include <stdio.h>
int main()
{
    int n;
    printf("enter size:");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter elements in array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int max = arr[n - 1];
    printf("leaders in array:%d ", max);
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            printf("%d ", max);
        }
    }
    return 0;
}