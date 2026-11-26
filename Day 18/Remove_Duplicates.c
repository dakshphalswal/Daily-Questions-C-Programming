#include <stdio.h>

int main()
{
    int n, i, k = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] != a[k - 1])
        {
            a[k] = a[i];
            k++;
        }
    }

    printf("Array after removing duplicates: ");

    for (i = 0; i < k; i++)
        printf("%d ", a[i]);

    printf("\nNumber of unique elements = %d", k);

    return 0;
}