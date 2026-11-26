//Without Sorting
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k, max, index;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for (int count = 1; count <= k; count++)
    {
        max = INT_MIN;
        index = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                index = i;
            }
        }

        a[index] = INT_MIN;
    }

    printf("Kth largest element = %d", max);

    return 0;
}