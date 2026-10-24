/* Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. */
#include <ctype.h>
#include <stdio.h>

#define BUFFER_SIZE 4096

int main(void)
{
    int character;
    FILE *input = fopen("input.txt", "r");
    FILE *output;

    if (input == NULL)
    {
        return 1;
    }
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        fclose(input);
        return 1;
    }
    while ((character = fgetc(input)) != EOF)
    {
        if (fputc(toupper((unsigned char)character), output) == EOF)
        {
            fclose(input);
            fclose(output);
            return 1;
        }
    }
    int failed = ferror(input) || fclose(input) != 0 || fclose(output) != 0;
    return failed ? 1 : 0;
}
