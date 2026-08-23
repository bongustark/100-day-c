/* Write a program to reverse a given number. */
#include <stdio.h>
int main(void)
{
    long long number;
    if (scanf("%lld", &number) != 1)return 1;
    int negative = number < 0;
    if (negative)number = -number;
    long long reverse = 0;
    do
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    while (number);
    printf("%s%lld\n", negative ? "-" : "", reverse);
    return 0;
}
