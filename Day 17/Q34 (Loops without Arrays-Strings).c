/* Write a program to check if a number is prime. */
#include <stdio.h>
int main(void)
{
    long n;
    int prime = 1;
    if (scanf("%ld", &n) != 1 || n < 2)prime = 0;
    for (long divisor = 2; prime && divisor <= n / divisor; divisor++)if (n % divisor == 0)prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
