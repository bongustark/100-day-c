/* Reverse each word in a sentence without changing the word order. */
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
    for (size_t start = 0; start < length;)
    {
        size_t end = start;
        while (end < length && text[end] != ' ')
        {
            ++end;
        }
        size_t left = start;
        size_t right = end;
        while (left < right)
        {
            --right;
            if (left >= right)
            {
                break;
            }
            char temporary = text[left];
            text[left] = text[right];
            text[right] = temporary;
            ++left;
        }
        start = end + 1;
    }
    text[length] = '\0';
    puts(text);
    return 0;
}
