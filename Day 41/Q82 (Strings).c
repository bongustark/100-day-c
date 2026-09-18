/* Print each character of a string on a new line. */
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    size_t length = 0;
    int character;

    while ((character = getchar()) != EOF && character != '\n')
    {
        if (length + 1 >= sizeof text)
        {
            return 1;
        }
        text[length++] = (char)character;
    }
    if (character == EOF && length == 0)
    {
        return 1;
    }
    for (size_t i = 0; i < length; ++i)
    {
        putchar((unsigned char)text[i]);
        putchar('\n');
    }
    return 0;
}
