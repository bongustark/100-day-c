/* Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>

static double square_root(double value)
{
    double estimate = value > 1.0 ? value : 1.0;
    for (int iteration = 0; iteration < 50; iteration++)
    {
        estimate = (estimate + value / estimate) / 2.0;
    }
    return estimate;
}

int main(void)
{
    double a, b, c, discriminant, root_one, root_two;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) return 1;
    discriminant = b * b - 4.0 * a * c;
    if (discriminant > 0.0)
    {
        root_one = (-b + square_root(discriminant)) / (2.0 * a);
        root_two = (-b - square_root(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root_one, root_two);
    }
    else if (discriminant == 0.0)
    {
        printf("Roots are real and same: %.2f\n", -b / (2.0 * a));
    }
    else
    {
        puts("Roots are complex");
    }
    return 0;
}
