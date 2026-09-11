/* Delete an element from an array. */
#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int position;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
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
    if (scanf("%d", &position) != 1 || position < 0 || position >= n)
    {
        return 1;
    }
    for (int i = position; i + 1 < n; ++i)
    {
        values[i] = values[i + 1];
    }
    for (int i = 0; i + 1 < n; ++i)
    {
        printf("%d%s", values[i], i + 2 == n ? "\n" : " ");
    }
    return 0;
}
