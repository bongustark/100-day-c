/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>

int main(void)
{
    double first, second;

    if (scanf("%lf %lf", &first, &second) != 2 || second == 0.0)
    {
        return 1;
    }
    printf("Sum=%.2f, Diff=%.2f, Product=%.2f, Quotient=%.2f\n",
           first + second, first - second, first * second, first / second);
    return 0;
}
