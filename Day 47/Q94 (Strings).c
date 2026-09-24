/* Find the longest word in a sentence. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    char *longest = NULL;
    size_t longest_length = 0;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0';)
    {
        while (isspace((unsigned char)text[i]))
        {
            ++i;
        }
        size_t start = i;
        while (text[i] != '\0' && !isspace((unsigned char)text[i]))
        {
            ++i;
        }
        if (i - start > longest_length)
        {
            longest = &text[start];
            longest_length = i - start;
        }
    }
    if (longest == NULL)
    {
        return 1;
    }
    printf("%.*s\n", (int)longest_length, longest);
    return 0;
}
