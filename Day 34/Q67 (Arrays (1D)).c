/* Insert an element in an array at a given position. */
#include <stdio.h>

int main(void)
{
    int n;
    int values[101];
    int position;
    int value;

    if (scanf("%d", &n) != 1 || n < 1 || n >= 100)
    {
        return 1;
    }
    for (int i = 0; i < n; ++i)
    {
        if (scanf("%d", &values[i]) != 1)
        {
            return 1;
        }
    }
    if (scanf("%d %d", &position, &value) != 2 || position < 0 || position > n)
    {
        return 1;
    }
    for (int i = n; i > position; --i)
    {
        values[i] = values[i - 1];
    }
    values[position] = value;
    for (int i = 0; i <= n; ++i)
    {
        printf("%d%s", values[i], i == n ? "\n" : " ");
    }
    return 0;
}
