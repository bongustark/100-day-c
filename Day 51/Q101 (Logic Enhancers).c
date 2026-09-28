/* Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    int values[MAX_SIZE];
    int target;
    int first = -1;
    int last = -1;

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
    if (scanf("%d", &target) != 1)
    {
        return 1;
    }
    int low = 0;
    int high = count;
    while (low < high)
    {
        int middle = low + (high - low) / 2;
        if (values[middle] < target)
        {
            low = middle + 1;
        }
        else
        {
            high = middle;
        }
    }
    if (low < count && values[low] == target)
    {
        first = low;
        low = 0;
        high = count;
        while (low < high)
        {
            int middle = low + (high - low) / 2;
            if (values[middle] <= target)
            {
                low = middle + 1;
            }
            else
            {
                high = middle;
            }
        }
        last = low - 1;
    }
    printf("%d,%d\n", first, last);
    return 0;
}
