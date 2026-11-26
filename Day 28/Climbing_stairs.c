
#include <stdio.h>

int main()
{
    int n, i;
    long long a = 1, b = 1, c;

    printf("Enter number of stairs: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Number of ways: 1");
        return 0;
    }

    for(i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Number of ways: %lld", b);

    return 0;
}

