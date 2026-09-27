/* Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char date[32];
    int day;
    int month;
    int year;
    char trailing;

    if (scanf("%31s", date) != 1 ||
            sscanf(date, "%d/%d/%d%c", &day, &month, &year, &trailing) != 3 ||
            day < 1 || day > 30 || month != 4 || year < 1)
    {
        return 1;
    }
    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}
