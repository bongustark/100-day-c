/* Store details of 5 students in an array of structures and print all. */
#include <stdio.h>

#define STUDENT_COUNT 5
#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

int main(void)
{
    Student students[STUDENT_COUNT];

    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        if (scanf("%127s%d%lf", students[i].name, &students[i].roll,
                  &students[i].marks) != 3 || students[i].marks < 0.0 ||
                students[i].marks > 100.0)
        {
            return 1;
        }
    }
    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        printf("Name: %s | Roll: %d | Marks: %g\n",
               students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}
