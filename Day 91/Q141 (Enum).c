/* Define a structure Student with name, roll_no, and marks, then read and print one student's data. */
#include <stdio.h>

#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

int main(void)
{
    Student student;

    if (scanf("%127s%d%lf", student.name, &student.roll, &student.marks) != 3 ||
            student.marks < 0.0 || student.marks > 100.0)
    {
        return 1;
    }
    printf("Name: %s | Roll: %d | Marks: %g\n",
           student.name, student.roll, student.marks);
    return 0;
}
