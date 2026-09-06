/* Find the maximum and minimum element in an array. */
#include <stdio.h>
int main(void)
{
    int n, value, maximum, minimum;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100 || scanf("%d", &value) != 1) return 1;
    maximum = minimum = value;
    for (int i = 1; i < n; i++)
    {
        if (scanf("%d", &value) != 1) return 1;
        if (value > maximum) maximum = value;
        if (value < minimum) minimum = value;
    }
    printf("Max=%d, Min=%d\n", maximum, minimum);
    return 0;
}
