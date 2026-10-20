/* Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines. */
#include <ctype.h>
#include <stdio.h>

#define BUFFER_SIZE 4096

int main(void)
{
    char filename[256];
    char buffer[BUFFER_SIZE];
    unsigned long long characters = 0;
    unsigned long long words = 0;
    unsigned long long lines = 0;
    int inside_word = 0;
    int last_character = '\n';
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
    while (fgets(buffer, sizeof buffer, file) != NULL)
    {
        for (size_t i = 0; buffer[i] != '\0'; ++i)
        {
            unsigned char character = (unsigned char)buffer[i];
            last_character = character;
            ++characters;
            if (character == '\n')
            {
                ++lines;
            }
            if (isspace(character))
            {
                inside_word = 0;
            }
            else if (!inside_word)
            {
                ++words;
                inside_word = 1;
            }
        }
    }
    if (characters > 0 && last_character != '\n')
    {
        ++lines;
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
    printf("Characters: %llu\nWords: %llu\nLines: %llu\n",
           characters, words, lines);
    return 0;
}
