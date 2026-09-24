/* Check if two strings are anagrams of each other. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char first[MAX_LENGTH];
    char second[MAX_LENGTH];
    int counts[256] = {0};

    if (fgets(first, sizeof first, stdin) == NULL ||
            fgets(second, sizeof second, stdin) == NULL)
    {
        return 1;
    }
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';
    if (strlen(first) != strlen(second))
    {
        puts("Not anagrams");
        return 0;
    }
    for (size_t i = 0; first[i] != '\0'; ++i)
    {
        ++counts[(unsigned char)first[i]];
        --counts[(unsigned char)second[i]];
    }
    for (size_t i = 0; i < 256; ++i)
    {
        if (counts[i] != 0)
        {
            puts("Not anagrams");
            return 0;
        }
    }
    puts("Anagrams");
    return 0;
}
