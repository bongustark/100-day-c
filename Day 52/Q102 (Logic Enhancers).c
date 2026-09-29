/* Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    int values[MAX_SIZE];
    int target;
    int low = 0;
    int high;

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
    high = count;
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
    printf("%d\n", low == count ? -1 : low);
    return 0;
}
