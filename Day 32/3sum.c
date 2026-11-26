
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int left, right, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort the array using Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Unique triplets are:\n");

    // Find triplets
    for(i = 0; i < n - 2; i++)
    {
        if(i > 0 && a[i] == a[i - 1])
            continue;

        left = i + 1;
        right = n - 1;

        while(left < right)
        {
            sum = a[i] + a[left] + a[right];

            if(sum == 0)
            {
                printf("%d %d %d\n", a[i], a[left], a[right]);

                left++;
                right--;

                while(left < right && a[left] == a[left - 1])
                    left++;

                while(left < right && a[right] == a[right + 1])
                    right--;
            }
            else if(sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return 0;
}
