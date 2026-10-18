/* Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved. */
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int main(void)
{
    char name[MAX_LENGTH];
    int age;
    FILE *file;

    if (fgets(name, sizeof name, stdin) == NULL || scanf("%d", &age) != 1 || age < 0)
    {
        return 1;
    }
    name[strcspn(name, "\r\n")] = '\0';
    if (name[0] == '\0')
    {
        return 1;
    }
    file = fopen("info.txt", "w");
    if (file == NULL)
    {
        return 1;
    }
    if (fprintf(file, "Name: %s\nAge: %d\n", name, age) < 0 || fclose(file) != 0)
    {
        return 1;
    }
    puts("File created successfully! Data written to info.txt");
    return 0;
}
