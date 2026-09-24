//Given two array arr1 and arr2 your task is to find out the smallest difference between two array elements.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10], arr2[10];
    int n, m;
    int min, diff;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    min = abs(arr1[0] - arr2[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            diff = abs(arr1[i] - arr2[j]);

            if (diff < min)
                min = diff;
        }
    }

    printf("Smallest difference = %d", min);

    return 0;
}