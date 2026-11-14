/* Take two structs as input and check if they are identical. */
#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int roll;
    double marks;
} Student;

int main(void)
{
    Student first;
    Student second;

    if (scanf("%127s%d%lf%127s%d%lf", first.name, &first.roll, &first.marks,
              second.name, &second.roll, &second.marks) != 6 ||
            first.marks < 0.0 || first.marks > 100.0 ||
            second.marks < 0.0 || second.marks > 100.0)
    {
        return 1;
    }
    puts(strcmp(first.name, second.name) == 0 && first.roll == second.roll &&
         first.marks == second.marks ? "Same" : "Different");
    return 0;
}
