/* Return a structure containing top student's details from a function. */
#include <stdio.h>

#define MAX_STUDENTS 1000
#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

static Student top_student(Student students[], int count)
{
    Student top = students[0];
    for (int i = 1; i < count; ++i)
    {
        if (students[i].marks > top.marks)
        {
            top = students[i];
        }
    }
    return top;
}

int main(void)
{
    int count;
    Student students[MAX_STUDENTS];

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS)
    {
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        if (scanf("%127s%d%lf", students[i].name, &students[i].roll,
                  &students[i].marks) != 3 || students[i].marks < 0.0 ||
                students[i].marks > 100.0)
        {
            return 1;
        }
    }
    Student top = top_student(students, count);
    printf("Top Student: %s | Roll: %d | Marks: %g\n",
           top.name, top.roll, top.marks);
    return 0;
}
