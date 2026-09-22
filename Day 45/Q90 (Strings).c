/* Toggle case of each character in a string. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (char)(text[i] - 'a' + 'A');
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (char)(text[i] - 'A' + 'a');
        }
    }
    fputs(text, stdout);
    if (text[0] == '\0' || text[strlen(text) - 1] != '\n')
    {
        putchar('\n');
    }
    return 0;
}
