
#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Cyclic Sort
    i = 0;

    while(i < n)
    {
        if(a[i] >= 1 && a[i] <= n && a[i] != a[a[i] - 1])
        {
            temp = a[i];
            a[i] = a[temp - 1];
            a[temp - 1] = temp;
        }
        else
        {
            i++;
        }
    }

    // Find first missing positive number
    for(i = 0; i < n; i++)
    {
        if(a[i] != i + 1)
        {
            printf("First missing positive number: %d", i + 1);
            return 0;
        }
    }

    printf("First missing positive number: %d", n + 1);

    return 0;
}
