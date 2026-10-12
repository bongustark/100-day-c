/* Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100000

int main(void)
{
    char first[MAX_LENGTH];
    char second[MAX_LENGTH];
    int counts[26] = {0};

    if (fgets(first, sizeof first, stdin) == NULL ||
            fgets(second, sizeof second, stdin) == NULL)
    {
        return 1;
    }
    size_t first_length = strcspn(first, "\r\n");
    size_t second_length = strcspn(second, "\r\n");
    if (first_length != second_length)
    {
        puts("Not Anagram");
        return 0;
    }
    for (size_t i = 0; i < first_length; ++i)
    {
        if (first[i] < 'a' || first[i] > 'z' || second[i] < 'a' || second[i] > 'z')
        {
            return 1;
        }
        ++counts[first[i] - 'a'];
        --counts[second[i] - 'a'];
    }
    for (int i = 0; i < 26; ++i)
    {
        if (counts[i] != 0)
        {
            puts("Not Anagram");
            return 0;
        }
    }
    puts("Anagram");
    return 0;
}
