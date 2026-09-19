/* Convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    int character;
    size_t length = 0;

    while ((character = getchar()) != EOF && character != '\n')
    {
        if (length + 1 >= sizeof text)
        {
            return 1;
        }
        if (character >= 'a' && character <= 'z')
        {
            character -= 'a' - 'A';
        }
        text[length++] = (char)character;
    }
    if (character == EOF && length == 0)
    {
        return 1;
    }
    text[length] = '\0';
    puts(text);
    return 0;
}
