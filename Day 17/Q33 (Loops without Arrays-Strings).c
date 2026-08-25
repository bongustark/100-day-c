/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>

static long long integer_power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main(void)
{
    long long number, original, temporary, sum = 0;
    int digits = 0;

    if (scanf("%lld", &number) != 1 || number < 0) return 1;
    original = number;
    temporary = number;
    do
    {
        digits++;
        temporary /= 10;
    }
    while (temporary);
    temporary = number;
    do
    {
        sum += integer_power((int)(temporary % 10), digits);
        temporary /= 10;
    }
    while (temporary);
    puts(sum == original ? "Armstrong" : "Not Armstrong");
    return 0;
}
