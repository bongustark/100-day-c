/* Print the initials of a name. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char name[MAX_LENGTH];
    int at_word_start = 1;

    if (fgets(name, sizeof name, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; name[i] != '\0' && name[i] != '\n'; ++i)
    {
        if (isspace((unsigned char)name[i]))
        {
            at_word_start = 1;
        }
        else if (at_word_start)
        {
            printf("%c.", (char)toupper((unsigned char)name[i]));
            at_word_start = 0;
        }
    }
    putchar('\n');
    return 0;
}
