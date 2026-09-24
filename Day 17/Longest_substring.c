//Given a string s, find the length of the longest substring without duplicate characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int max = 0;

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
            max = count;
    }

    printf("Length of longest substring = %d", max);

    return 0;
}