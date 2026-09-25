/* Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char first[MAX_LENGTH];
    char second[MAX_LENGTH];
    size_t first_length;
    size_t second_length;

    if (fgets(first, sizeof first, stdin) == NULL ||
            fgets(second, sizeof second, stdin) == NULL)
    {
        return 1;
    }
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';
    first_length = strlen(first);
    second_length = strlen(second);
    if (first_length != second_length)
    {
        puts("Not rotation");
        return 0;
    }
    for (size_t shift = 0; shift < first_length; ++shift)
    {
        size_t i = 0;
        while (i < first_length && first[(shift + i) % first_length] == second[i])
        {
            ++i;
        }
        if (i == first_length)
        {
            puts("Rotation");
            return 0;
        }
    }
    puts("Not rotation");
    return 0;
}
