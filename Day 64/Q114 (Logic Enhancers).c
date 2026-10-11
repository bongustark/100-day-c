/* Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100000

int main(void)
{
    char text[MAX_LENGTH];
    size_t last_seen[256];
    size_t start = 0;
    size_t longest = 0;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    size_t length = strcspn(text, "\r\n");
    for (size_t i = 0; i < 256; ++i)
    {
        last_seen[i] = (size_t) -1;
    }
    for (size_t i = 0; i < length; ++i)
    {
        unsigned char character = (unsigned char)text[i];
        if (last_seen[character] != (size_t) -1 && last_seen[character] >= start)
        {
            start = last_seen[character] + 1;
        }
        last_seen[character] = i;
        if (i - start + 1 > longest)
        {
            longest = i - start + 1;
        }
    }
    printf("%zu\n", longest);
    return 0;
}
