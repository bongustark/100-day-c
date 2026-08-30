/* Write a program to check if a number is a strong number. */
#include <stdio.h>
int main(void)
{
    int number, original, sum = 0;
    if (scanf("%d", &number) != 1 || number < 0) return 1;
    original = number;
    do
    {
        int digit = number % 10, factorial = 1;
        for (int i = 2; i <= digit; i++) factorial *= i;
        sum += factorial;
        number /= 10;
    }
    while (number);
    puts(sum == original ? "Strong number" : "Not strong number");
    return 0;
}
