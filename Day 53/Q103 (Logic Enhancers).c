/* Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    long long values[MAX_SIZE];
    long long total = 0;
    long long left = 0;

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE)
    {
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        if (scanf("%lld", &values[i]) != 1)
        {
            return 1;
        }
        total += values[i];
    }
    for (int i = 0; i < count; ++i)
    {
        if (left == total - left - values[i])
        {
            printf("%d\n", i);
            return 0;
        }
        left += values[i];
    }
    puts("-1");
    return 0;
}
