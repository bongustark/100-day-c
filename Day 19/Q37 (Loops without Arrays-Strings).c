/* Write a program to find the LCM of two numbers. */
#include <stdio.h>
int main(void)
{
    long a, b, x, y, gcd;
    if (scanf("%ld %ld", &a, &b) != 2 || a == 0 || b == 0)return 1;
    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;
    while (y)
    {
        long temp = x % y;
        x = y;
        y = temp;
    }
    gcd = x;
    printf("%ld\n", (a / gcd)*b < 0 ? -(a / gcd)*b : (a / gcd)*b);
    return 0;
}
