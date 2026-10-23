/* Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content. */
#include <stdio.h>

#define BUFFER_SIZE 512

int main(void)
{
    char filename[256];
    char line[BUFFER_SIZE];
    FILE *file;

    if (scanf("%255s", filename) != 1)
    {
        return 1;
    }
    file = fopen(filename, "r");
    if (file == NULL)
    {
        puts("Error: File does not exist!");
        return 1;
    }
    puts("File opened successfully.");
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
