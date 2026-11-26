
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, left, right;
    int start = 0, max = 0, len;

    printf("Enter a string: ");
    scanf("%99s", s);

    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        // Odd length palindrome
        left = i;
        right = i;

        while(left >= 0 && right < len && s[left] == s[right])
        {
            if(right - left + 1 > max)
            {
                max = right - left + 1;
                start = left;
            }

            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while(left >= 0 && right < len && s[left] == s[right])
        {
            if(right - left + 1 > max)
            {
                max = right - left + 1;
                start = left;
            }

            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");

    for(i = start; i < start + max; i++)
    {
        printf("%c", s[i]);
    }

    printf("\nLength: %d", max);

    return 0;
}
