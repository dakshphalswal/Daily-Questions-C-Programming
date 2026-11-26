
#include <stdio.h>

int main()
{
    int n;
    double low, high, mid;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Square root of negative number is not real.");
        return 0;
    }

    low = 0;
    high = n;

    if(n < 1)
        high = 1;

    for(int i = 0; i < 100; i++)
    {
        mid = (low + high) / 2;

        if(mid * mid == n)
        {
            break;
        }
        else if(mid * mid < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    printf("Square root = %.2lf", mid);

    return 0;
}
