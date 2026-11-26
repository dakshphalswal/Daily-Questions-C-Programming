//Partition-Based Selection
#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }

    int temp = a[i];
    a[i] = a[high];
    a[high] = temp;

    return i;
}

int main()
{
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    int target = n - k;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int p = partition(a, low, high);

        if (p == target)
        {
            printf("Kth largest element = %d", a[p]);
            break;
        }
        else if (p < target)
        {
            low = p + 1;
        }
        else
        {
            high = p - 1;
        }
    }

    return 0;
}