/* Create Employee structure with nested Date structure for joining date and print details. */
#include <stdio.h>

#define NAME_LENGTH 128

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    char name[NAME_LENGTH];
    int id;
    Date joining_date;
} Employee;

int main(void)
{
    Employee employee;

    if (scanf("%127s%d%d%d%d", employee.name, &employee.id,
              &employee.joining_date.day, &employee.joining_date.month,
              &employee.joining_date.year) != 5 || employee.id < 0 ||
            employee.joining_date.day < 1 || employee.joining_date.day > 31 ||
            employee.joining_date.month < 1 || employee.joining_date.month > 12 ||
            employee.joining_date.year < 1)
    {
        return 1;
    }
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           employee.name, employee.id, employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);
    return 0;
}
