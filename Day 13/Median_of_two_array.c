//Given two sorted arrays nums1 and nums2 of size m and n respectively, 
//return the median of the two sorted arrays.

#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];
    int m, n, i, j, temp;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < m; i++)
        c[i] = a[i];

    for (i = 0; i < n; i++)
        c[m + i] = b[i];

    // Sort combined array
    for (i = 0; i < m + n - 1; i++)
    {
        for (j = i + 1; j < m + n; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    int total = m + n;

    if (total % 2 == 1)
        printf("Median = %d", c[total / 2]);
    else
        printf("Median = %.2f",
               (c[total / 2 - 1] + c[total / 2]) / 2.0);

    return 0;
}