/* Write a program to take a string input. Change it to sentence case. */
#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    int capitalize = 1;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0'; ++i)
    {
        unsigned char character = (unsigned char)text[i];
        if (isalpha(character))
        {
            text[i] = (char)(capitalize ? toupper(character) : tolower(character));
            capitalize = 0;
        }
        else if (isspace(character))
        {
            capitalize = 1;
        }
    }
    fputs(text, stdout);
    return 0;
}
