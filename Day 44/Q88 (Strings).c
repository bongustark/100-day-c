/* Replace spaces with hyphens in a string. */
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0'; ++i)
    {
        if (text[i] == ' ')
        {
            text[i] = '-';
        }
        if (text[i] == '\n' || text[i] == '\r')
        {
            text[i] = '\0';
            break;
        }
    }
    puts(text);
    return 0;
}
