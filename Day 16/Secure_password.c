#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[100];
        int lower = 0, upper = 0, digit = 0, special = 0;
        int n;

        scanf("%s", s);

        n = strlen(s);

        if (n < 10)
        {
            printf("NO\n");
            continue;
        }

        // Check characters strictly inside
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                upper = 1;

            if (s[i] >= '0' && s[i] <= '9')
                digit = 1;

            if (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                s[i] == '&' || s[i] == '?')
                special = 1;
        }

        // Check lowercase anywhere
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower = 1;
                break;
            }
        }

        if (lower && upper && digit && special)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}