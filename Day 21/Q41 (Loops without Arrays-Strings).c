/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>
int main(void)
{
    long long number, divisor = 1, first, last, middle;
    if (scanf("%lld", &number) != 1 || number < 0) return 1;
    if (number < 10)
    {
        printf("%lld\n", number);
        return 0;
    }
    while (number / divisor >= 10) divisor *= 10;
    first = number / divisor;
    last = number % 10;
    middle = (number % divisor) / 10;
    printf("%lld\n", last * divisor + middle * 10 + first);
    return 0;
}
