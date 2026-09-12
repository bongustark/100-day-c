/* Rotate an array to the right by k positions. */
#include <stdio.h>

#define MAX_SIZE 10000

static void reverse(int values[], int left, int right)
{
    while (left < right)
    {
        int temporary = values[left];
        values[left++] = values[right];
        values[right--] = temporary;
    }
}

int main(void)
{
    int count;
    long long rotations;
    int values[MAX_SIZE];

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE)
    {
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        if (scanf("%d", &values[i]) != 1)
        {
            return 1;
        }
    }
    if (scanf("%lld", &rotations) != 1)
    {
        return 1;
    }
    rotations %= count;
    if (rotations < 0)
    {
        rotations += count;
    }
    reverse(values, 0, count - 1);
    reverse(values, 0, (int)rotations - 1);
    reverse(values, (int)rotations, count - 1);
    for (int i = 0; i < count; ++i)
    {
        printf("%s%d", i == 0 ? "" : " ", values[i]);
    }
    putchar('\n');
    return 0;
}
