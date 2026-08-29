/* Write a program to check if a number is a perfect number. */
#include <stdio.h>
int main(void)
{
    int number, sum = 1;
    if (scanf("%d", &number) != 1 || number < 1) return 1;
    if (number == 1) sum = 0;
    for (int divisor = 2; divisor <= number / divisor; divisor++)
    {
        if (number % divisor == 0) sum += divisor + (divisor == number / divisor ? 0 : number / divisor);
    }
    puts(sum == number ? "Perfect number" : "Not perfect number");
    return 0;
}
