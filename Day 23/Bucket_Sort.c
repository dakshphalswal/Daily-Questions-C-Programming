
#include <stdio.h>

int main()
{
    int n, i, j;
    float a[100], bucket[10][100];
    int count[10] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements between 0 and 1:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    // Put elements into buckets
    for(i = 0; i < n; i++)
    {
        int index = a[i] * 10;
        if(index == 10)
            index = 9;

        bucket[index][count[index]] = a[i];
        count[index]++;
    }

    // Sort each bucket using Bubble Sort
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < count[i] - 1; j++)
        {
            for(int k = 0; k < count[i] - j - 1; k++)
            {
                if(bucket[i][k] > bucket[i][k + 1])
                {
                    float temp = bucket[i][k];
                    bucket[i][k] = bucket[i][k + 1];
                    bucket[i][k + 1] = temp;
                }
            }
        }
    }

    // Print sorted elements
    printf("Sorted array: ");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < count[i]; j++)
        {
            printf("%.2f ", bucket[i][j]);
        }
    }

    return 0;
}
