#include <stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], b[n];
    int k = 0;

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Store non-zero elements
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            b[k] = a[i];
            k++;
        }
    }

    // Add zeros at the end
    while (k < n)
    {
        b[k] = 0;
        k++;
    }

    printf("Result: ");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}