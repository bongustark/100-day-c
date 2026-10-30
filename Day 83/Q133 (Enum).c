/* Create an enum for months and print how many days each month has. */
#include <stdio.h>
#include <string.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
           };

int main(void)
{
    static const char *const abbreviations[] =
    {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };
    char input[16];
    int month = 0;
    int days;

    if (scanf("%15s", input) != 1)
    {
        return 1;
    }
    for (int i = 0; i < 12; ++i)
    {
        if (strcmp(input, abbreviations[i]) == 0)
        {
            month = i + JANUARY;
            break;
        }
    }
    if (month < JANUARY || month > DECEMBER)
    {
        return 1;
    }
    switch ((enum Month)month)
    {
    case FEBRUARY:
        puts("28 or 29 days");
        return 0;
    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    printf("%d days\n", days);
    return 0;
}
