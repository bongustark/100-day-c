/* Write a program to calculate the factorial of a number. */
#include <stdio.h>
int main(void)
{
    unsigned n;
    if (scanf("%u", &n) != 1 || n > 20)return 1;
    unsigned long long result = 1;
    for (unsigned i = 2; i <= n; i++)result *= i;
    printf("%llu\n", result);
    return 0;
}
