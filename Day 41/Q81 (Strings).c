/* Count characters in a string without using built-in length functions. */
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
    printf("%zu\n", length);
    return 0;
}
