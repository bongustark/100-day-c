/* Store employee data in a binary file using fwrite() and read using fread(). */
#include <stdio.h>

#define NAME_LENGTH 128

typedef struct
{
    char name[NAME_LENGTH];
    int id;
    double salary;
} Employee;

int main(void)
{
    Employee employee;
    FILE *file;

    if (scanf("%127s%d%lf", employee.name, &employee.id, &employee.salary) != 3 ||
            employee.id < 0 || employee.salary < 0.0)
    {
        return 1;
    }
    file = fopen("employee.bin", "wb");
    if (file == NULL)
    {
        return 1;
    }
    if (fwrite(&employee, sizeof employee, 1, file) != 1 || fclose(file) != 0)
    {
        return 1;
    }
    file = fopen("employee.bin", "rb");
    if (file == NULL)
    {
        return 1;
    }
    if (fread(&employee, sizeof employee, 1, file) != 1 || fclose(file) != 0)
    {
        return 1;
    }
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           employee.name, employee.id, employee.salary);
    return 0;
}
