
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, x;
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    int c1 = 0, c2 = 0, c3 = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        x = a[i];

        // Ignore duplicate elements
        if((c1 && x == first) ||
           (c2 && x == second) ||
           (c3 && x == third))
        {
            continue;
        }

        if(!c1 || x > first)
        {
            third = second;
            c3 = c2;

            second = first;
            c2 = c1;

            first = x;
            c1 = 1;
        }
        else if(!c2 || x > second)
        {
            third = second;
            c3 = c2;

            second = x;
            c2 = 1;
        }
        else if(!c3 || x > third)
        {
            third = x;
            c3 = 1;
        }
    }

    if(c3)
        printf("Third maximum number: %d", third);
    else
        printf("Third maximum does not exist");

    return 0;
}
