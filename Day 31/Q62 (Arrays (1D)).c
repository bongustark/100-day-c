/* Reverse an array without taking extra space. */
#include <stdio.h>
int main(void)
{
    int n, values[100];
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    for (int left = 0, right = n - 1; left < right; left++, right--)
    {
        int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
    }
    for (int i = 0; i < n; i++) printf("%d%s", values[i], i + 1 == n ? "\n" : " ");
    return 0;
}
