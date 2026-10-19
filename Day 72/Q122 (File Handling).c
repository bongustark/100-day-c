/* Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached. */
#include <stdio.h>

#define BUFFER_SIZE 512

int main(void)
{
    char line[BUFFER_SIZE];
    FILE *file = fopen("info.txt", "r");

    if (file == NULL)
    {
        puts("Error: File does not exist!");
        return 1;
    }
    while (fgets(line, sizeof line, file) != NULL)
    {
        fputs(line, stdout);
    }
    if (ferror(file))
    {
        fclose(file);
        return 1;
    }
    return fclose(file) == 0 ? 0 : 1;
}
