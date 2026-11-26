
#include <stdio.h>
#include <string.h>

void sort(char a[])
{
    int i, j;
    char temp;

    for(i = 0; i < strlen(a) - 1; i++)
    {
        for(j = 0; j < strlen(a) - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char s[100], p[100];
    char temp[100], pattern[100];
    int i, j;
    int n, m;

    printf("Enter main string: ");
    scanf("%99s", s);

    printf("Enter pattern: ");
    scanf("%99s", p);

    n = strlen(s);
    m = strlen(p);

    strcpy(pattern, p);
    sort(pattern);

    printf("Anagram indices: ");

    for(i = 0; i <= n - m; i++)
    {
        for(j = 0; j < m; j++)
        {
            temp[j] = s[i + j];
        }

        temp[m] = '\0';

        sort(temp);

        if(strcmp(temp, pattern) == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
