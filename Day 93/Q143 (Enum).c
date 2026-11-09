/* Find and print the student with the highest marks. */
#include <stdio.h>

#define MAX_STUDENTS 1000
#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

int main(void)
{
    int count;
    Student top;

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS)
    {
        return 1;
    }
    if (scanf("%127s%d%lf", top.name, &top.roll, &top.marks) != 3 ||
            top.marks < 0.0 || top.marks > 100.0)
    {
        return 1;
    }
    for (int i = 1; i < count; ++i)
    {
        Student current;
        if (scanf("%127s%d%lf", current.name, &current.roll, &current.marks) != 3 ||
                current.marks < 0.0 || current.marks > 100.0)
        {
            return 1;
        }
        if (current.marks > top.marks)
        {
            top = current;
        }
    }
    printf("Topper: %s (Marks: %g)\n", top.name, top.marks);
    return 0;
}
