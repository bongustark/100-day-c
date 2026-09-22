/* Count frequency of a given character in a string. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    char target;
    int count = 0;

    if (fgets(text, sizeof text, stdin) == NULL ||
            scanf(" %c", &target) != 1)
    {
        return 1;
    }
    text[strcspn(text, "\r\n")] = '\0';
    for (size_t i = 0; text[i] != '\0'; ++i)
    {
        if (text[i] == target)
        {
            ++count;
        }
    }
    printf("%d\n", count);
    return 0;
}
