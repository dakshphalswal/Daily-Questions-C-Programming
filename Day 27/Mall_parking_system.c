
#include <stdio.h>

int main()
{
    int r, c, i, j;
    int found = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter parking layout (0 = Empty, 1 = Occupied):\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find first available parking spot
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == 0)
            {
                a[i][j] = 1;
                printf("Car parked successfully!\n");
                printf("Parking spot: Row %d, Column %d\n", i + 1, j + 1);

                found = 1;
                break;
            }
        }

        if(found == 1)
            break;
    }

    if(found == 0)
    {
        printf("Parking is full! No available spot.\n");
    }

    printf("\nUpdated parking layout:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
