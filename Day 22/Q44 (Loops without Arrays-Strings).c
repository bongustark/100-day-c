/* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>
int main(void)
{
    int n;
    double sum = 0.0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int term = 1; term <= n; term++) sum += (2.0 * term - 1.0) / (term == 1 ? 1.0 : term + 2.0);
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
