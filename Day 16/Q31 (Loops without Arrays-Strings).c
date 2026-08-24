/* Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>
int main(void)
{
    unsigned long number;
    if (scanf("%lu", &number) != 1)return 1;
    if (number == 0)
    {
        puts("0");
        return 0;
    }
    char bits[sizeof number * 8];
    int count = 0;
    while (number)
    {
        bits[count++] = (char)('0' + number % 2);
        number /= 2;
    }
    while (count)putchar(bits[--count]);
    putchar('\n');
    return 0;
}
