/* Count vowels and consonants in a string. */
#include <ctype.h>
#include <stdio.h>

#define MAX_LENGTH 10000

int main(void)
{
    char text[MAX_LENGTH];
    int vowels = 0;
    int consonants = 0;

    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    for (size_t i = 0; text[i] != '\0'; ++i)
    {
        unsigned char character = (unsigned char)text[i];
        if (isalpha(character))
        {
            int lower = tolower(character);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            {
                ++vowels;
            }
            else
            {
                ++consonants;
            }
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
