/* Count spaces, digits, and special characters in a string. */
#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    int spaces = 0;
    int digits = 0;
    int special = 0;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i)
    {
        unsigned char character = (unsigned char)text[i];
        if (character == ' ')
        {
            ++spaces;
        }
        else if (isdigit(character))
        {
            ++digits;
        }
        else if (!isalpha(character))
        {
            ++special;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
