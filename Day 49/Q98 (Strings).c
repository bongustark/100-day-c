/* Print initials of a name with the surname displayed in full. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char name[MAX_LENGTH];
    size_t starts[MAX_LENGTH / 2];
    size_t lengths[MAX_LENGTH / 2];
    size_t words = 0;
    size_t i = 0;

    if (fgets(name, sizeof name, stdin) == NULL)
    {
        return 1;
    }
    while (name[i] != '\0' && name[i] != '\n')
    {
        while (isspace((unsigned char)name[i]))
        {
            ++i;
        }
        if (name[i] == '\0' || name[i] == '\n')
        {
            break;
        }
        if (words >= sizeof starts / sizeof starts[0])
        {
            return 1;
        }
        starts[words] = i;
        while (name[i] != '\0' && name[i] != '\n' &&
                !isspace((unsigned char)name[i]))
        {
            ++i;
        }
        lengths[words] = i - starts[words];
        ++words;
    }
    if (words == 0)
    {
        return 1;
    }
    for (size_t word = 0; word + 1 < words; ++word)
    {
        printf("%c.", (char)toupper((unsigned char)name[starts[word]]));
    }
    putchar(' ');
    printf("%.*s\n", (int)lengths[words - 1], &name[starts[words - 1]]);
    return 0;
}
