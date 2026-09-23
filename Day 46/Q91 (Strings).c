/* Remove all vowels from a string. */
#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    size_t output = 0;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i)
    {
        int character = tolower((unsigned char)text[i]);
        if (character != 'a' && character != 'e' && character != 'i' &&
                character != 'o' && character != 'u')
        {
            text[output++] = text[i];
        }
    }
    text[output] = '\0';
    puts(text);
    return 0;
}
