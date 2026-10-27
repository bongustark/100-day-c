/* Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record. */
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
    Student students[MAX_STUDENTS];
    FILE *file;

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
    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        if (fprintf(file, "%s %d %.2f\n", students[i].name,
                    students[i].roll, students[i].marks) < 0)
        {
            fclose(file);
            return 1;
        }
    }
    if (fclose(file) != 0 || (file = fopen("students.txt", "r")) == NULL)
    {
        return 1;
    }
    Student student;
    while (fscanf(file, "%127s%d%lf", student.name, &student.roll, &student.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %g\n",
               student.name, student.roll, student.marks);
    }
    int failed = ferror(file);
    if (fclose(file) != 0)
    {
        failed = 1;
    }
    return failed ? 1 : 0;
}
