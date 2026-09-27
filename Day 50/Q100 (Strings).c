/* Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main(void)
{
    char text[MAX_LENGTH];
    size_t length;
    int first = 1;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    length = strcspn(text, "\r\n");
    for (size_t start = 0; start < length; ++start)
    {
        for (size_t end = start + 1; end <= length; ++end)
        {
            printf("%s%.*s", first ? "" : ",", (int)(end - start), &text[start]);
            first = 0;
        }
    }
    putchar('\n');
    return 0;
}
