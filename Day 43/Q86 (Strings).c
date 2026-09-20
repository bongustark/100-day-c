/* Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    size_t length;
    int palindrome = 1;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    length = strcspn(text, "\r\n");
    for (size_t left = 0; left < length / 2; ++left)
    {
        if (text[left] != text[length - left - 1])
        {
            palindrome = 0;
            break;
        }
    }
    puts(palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
