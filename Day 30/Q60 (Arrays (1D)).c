/* Count positive, negative, and zero elements in an array. */
#include <stdio.h>
int main(void)
{
    int n, value, positive = 0, negative = 0, zero = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &value) != 1) return 1;
        if (value > 0) positive++;
        else if (value < 0) negative++;
        else zero++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
