/* Use malloc() to allocate structure memory dynamically and print details. */
#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

int main(void)
{
    Student *student = malloc(sizeof *student);

    if (student == NULL)
    {
        return 1;
    }
    if (scanf("%127s%d%lf", student->name, &student->roll, &student->marks) != 3 ||
            student->marks < 0.0 || student->marks > 100.0)
    {
        free(student);
        return 1;
    }
    printf("Name: %s | Roll: %d | Marks: %g\n",
           student->name, student->roll, student->marks);
    free(student);
    return 0;
}
