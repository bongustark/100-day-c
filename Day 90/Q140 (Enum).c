/* Define a struct with enum Gender and print person's gender. */
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

typedef struct
{
    enum Gender gender;
} Person;

int main(void)
{
    char input[16];
    Person person;

    if (scanf("%15s", input) != 1)
    {
        return 1;
    }
    if (strcmp(input, "MALE") == 0)
    {
        person.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0)
    {
        person.gender = FEMALE;
    }
    else if (strcmp(input, "OTHER") == 0)
    {
        person.gender = OTHER;
    }
    else
    {
        return 1;
    }
    switch (person.gender)
    {
    case MALE:
        puts("Male");
        break;
    case FEMALE:
        puts("Female");
        break;
    case OTHER:
        puts("Other");
        break;
    }
    return 0;
}
