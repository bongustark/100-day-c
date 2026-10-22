/* Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

int main(void)
{
    char filename[256];
    char text[MAX_LENGTH];
    FILE *file;

    if (scanf("%255s", filename) != 1)
    {
        return 1;
    }
    int character;
    while ((character = getchar()) != '\n' && character != EOF)
    {
    }
    if (fgets(text, sizeof text, stdin) == NULL)
    {
        return 1;
    }
    text[strcspn(text, "\r\n")] = '\0';
    file = fopen(filename, "a");
    if (file == NULL)
    {
        return 1;
    }
    if (fprintf(file, "%s\n", text) < 0 || fclose(file) != 0)
    {
        return 1;
    }
    puts("File updated successfully with appended text.");
    return 0;
}
