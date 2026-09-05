/* Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>
int main(void)
{
    int n, printed = 0;
    if (scanf("%d", &n) != 1 || n < 2) return 1;
    for (int number = 2; number <= n; number++)
    {
        int prime = 1;
        for (int divisor = 2; divisor <= number / divisor; divisor++) if (number % divisor == 0) prime = 0;
        if (prime) printf("%d%s", number, ++printed ? (number == n ? "\n" : " ") : "");
    }
    return 0;
}
