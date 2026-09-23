/* Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    int seen[26] = {0};

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; ++i)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            int index = text[i] - 'a';
            if (seen[index])
            {
                printf("%c\n", text[i]);
                return 0;
            }
            seen[index] = 1;
        }
    }
    puts("-1");
    return 0;
}
