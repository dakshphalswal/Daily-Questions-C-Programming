
#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Modified array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
