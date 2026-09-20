/* Reverse a string. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    size_t length;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    length = strcspn(text, "\r\n");
    text[length] = '\0';
    for (size_t left = 0, right = length; left < right / 2; ++left)
    {
        char temporary = text[left];
        text[left] = text[right - left - 1];
        text[right - left - 1] = temporary;
    }
    puts(text);
    return 0;
}
