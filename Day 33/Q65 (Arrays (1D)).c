/* Search in a sorted array using binary search. */
#include <stdio.h>

int main(void)
{
    int n;
    int values[100];
    int target;
    int left = 0;
    int right;
    int result = -1;

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
    if (scanf("%d", &target) != 1)
    {
        return 1;
    }
    right = n - 1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (values[middle] == target)
        {
            result = middle;
            break;
        }
        if (values[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    if (result >= 0)
    {
        printf("Found at index %d\n", result);
    }
    else
    {
        puts("-1");
    }
    return 0;
}
