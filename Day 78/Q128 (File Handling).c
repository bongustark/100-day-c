/* Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char filename[256];
    unsigned long long vowels = 0;
    unsigned long long consonants = 0;
    int character;
    FILE *file;

    if (scanf("%255s", filename) != 1)
    {
        return 1;
    }
    file = fopen(filename, "r");
    if (file == NULL)
    {
        return 1;
    }
    while ((character = fgetc(file)) != EOF)
    {
        if (isalpha((unsigned char)character))
        {
            int lower = tolower((unsigned char)character);
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
    int failed = ferror(file);
    if (fclose(file) != 0)
    {
        failed = 1;
    }
    if (failed)
    {
        return 1;
    }
    printf("Vowels: %llu\nConsonants: %llu\n", vowels, consonants);
    return 0;
}
