/* Count even and odd numbers in an array. */
#include <stdio.h>
int main(void)
{
    int n, value, even = 0, odd = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &value) != 1) return 1;
        if (value % 2 == 0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
