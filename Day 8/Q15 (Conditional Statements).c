/* Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    unsigned char character;

    if (scanf(" %c", &character) != 1)
    {
        return 1;
    }
    if (isupper(character))
    {
        puts("Uppercase alphabet");
    }
    else if (islower(character))
    {
        puts("Lowercase alphabet");
    }
    else if (isdigit(character))
    {
        puts("Digit");
    }
    else
    {
        puts("Special character");
    }
    return 0;
}
