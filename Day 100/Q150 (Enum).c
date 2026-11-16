/* Use pointer to struct to modify and display data using -> operator. */
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
    Student *pointer = &student;

    if (scanf("%127s%d%lf", pointer->name, &pointer->roll,
              &pointer->marks) != 3 || pointer->marks < 0.0 ||
            pointer->marks > 100.0)
    {
        return 1;
    }
    printf("Modified Data: Name: %s | Roll: %d | Marks: %g\n",
           pointer->name, pointer->roll, pointer->marks);
    return 0;
}
