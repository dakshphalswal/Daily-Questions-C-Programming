//optimal solution


#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], p[100];
    int freq1[26] = {0};
    int freq2[26] = {0};

    int n, m, i, j, flag;

    printf("Enter main string: ");
    scanf("%99s", s);

    printf("Enter pattern: ");
    scanf("%99s", p);

    n = strlen(s);
    m = strlen(p);

    if(m > n)
    {
        printf("No anagrams found");
        return 0;
    }

    // Count pattern characters
    for(i = 0; i < m; i++)
    {
        freq1[p[i] - 'a']++;
        freq2[s[i] - 'a']++;
    }

    printf("Anagram indices: ");

    // Check first window and remaining windows
    for(i = 0; i <= n - m; i++)
    {
        flag = 1;

        for(j = 0; j < 26; j++)
        {
            if(freq1[j] != freq2[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }

        // Slide the window
        if(i < n - m)
        {
            freq2[s[i] - 'a']--;
            freq2[s[i + m] - 'a']++;
        }
    }

    return 0;
}
