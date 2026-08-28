/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>
int main(void)
{
    long long n, product = 1;
    int found = 0;
    if (scanf("%lld", &n) != 1)return 1;
    if (n < 0)n = -n;
    do
    {
        long digit = n % 10;
        if (digit % 2)
        {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }
    while (n);
    printf("%lld\n", found ? product : 1);
    return 0;
}
