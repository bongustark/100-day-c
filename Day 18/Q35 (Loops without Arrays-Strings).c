/* Write a program to print all factors of a given number. */
#include <stdio.h>
int main(void)
{
    long n;
    if (scanf("%ld", &n) != 1 || n <= 0)return 1;
    for (long i = 1; i <= n; i++)if (n % i == 0)printf("%ld%s", i, i == n ? "\n" : " ");
    return 0;
}
