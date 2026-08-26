/* Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>
int main(void)
{
    long a, b, temp;
    if (scanf("%ld %ld", &a, &b) != 2)return 1;
    if (a < 0)a = -a;
    if (b < 0)b = -b;
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%ld\n", a);
    return 0;
}
