
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int low = 0, high = n - 1;
    int mid;

    while(low < high)
    {
        mid = low + (high - low) / 2;

        if(a[mid] > a[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Peak element: %d\n", a[low]);
    printf("Peak index: %d", low);

    return 0;
}
