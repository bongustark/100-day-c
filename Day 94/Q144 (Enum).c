/* Write a function that accepts a structure as parameter and prints its members. */
#include <stdio.h>

#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

static void print_student(Student student)
{
    printf("Name: %s | Roll: %d | Marks: %g\n",
           student.name, student.roll, student.marks);
}

int main(void)
{
    Student student;

    if (scanf("%127s%d%lf", student.name, &student.roll, &student.marks) != 3 ||
            student.marks < 0.0 || student.marks > 100.0)
    {
        return 1;
    }
    print_student(student);
    return 0;
}
