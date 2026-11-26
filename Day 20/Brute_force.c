#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int max = 0, start = 0, end = 0;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        int found[256] = {0};
        int count = 0;

        for (int j = i; j < n; j++)
        {
            if (found[(unsigned char)s[j]] == 1)
                break;

            found[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max)
        {
            max = count;
            start = i;
            end = i + count;
        }
    }

    printf("Longest substring: ");

    for (int i = start; i < end; i++)
        printf("%c", s[i]);

    printf("\nLength = %d", max);

    return 0;
}