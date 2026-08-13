/* Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>

int main(void)
{
    double principal, rate, time, simple_interest, compound_interest;

    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 ||
            principal < 0.0 || rate < 0.0 || time < 0.0)
    {
        return 1;
    }
    simple_interest = principal * rate * time / 100.0;
    compound_interest = principal;
    for (int year = 0; year < (int) time; year++)
    {
        compound_interest *= 1.0 + rate / 100.0;
    }
    compound_interest -= principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);
    return 0;
}
