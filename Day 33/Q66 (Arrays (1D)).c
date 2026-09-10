/* Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main(void)
{
    int n;
    int values[101];
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
    if (scanf("%d", &value) != 1)
    {
        return 1;
    }
    int position = n;
    while (position > 0 && values[position - 1] > value)
    {
        values[position] = values[position - 1];
        --position;
    }
    values[position] = value;
    for (int i = 0; i <= n; ++i)
    {
        printf("%d%s", values[i], i == n ? "\n" : " ");
    }
    return 0;
}
