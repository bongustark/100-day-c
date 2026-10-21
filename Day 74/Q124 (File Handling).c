/* Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc(). */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source_name[256];
    char destination_name[256];
    FILE *source;
    FILE *destination;
    int character;

    if (scanf("%255s%255s", source_name, destination_name) != 2 ||
            strcmp(source_name, destination_name) == 0)
    {
        return 1;
    }
    source = fopen(source_name, "rb");
    if (source == NULL)
    {
        return 1;
    }
    destination = fopen(destination_name, "wb");
    if (destination == NULL)
    {
        fclose(source);
        return 1;
    }
    while ((character = fgetc(source)) != EOF)
    {
        if (fputc(character, destination) == EOF)
        {
            fclose(source);
            fclose(destination);
            return 1;
        }
    }
    int failed = ferror(source);
    if (fclose(source) != 0)
    {
        failed = 1;
    }
    if (fclose(destination) != 0)
    {
        failed = 1;
    }
    if (failed)
    {
        return 1;
    }
    printf("File copied successfully to %s\n", destination_name);
    return 0;
}
