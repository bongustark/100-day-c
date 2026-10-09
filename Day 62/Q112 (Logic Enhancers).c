/* Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    long long current;
    long long maximum;

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE ||
            scanf("%lld", &current) != 1)
    {
        return 1;
    }
    maximum = current;
    for (int i = 1; i < count; ++i)
    {
        long long value;
        if (scanf("%lld", &value) != 1)
        {
            return 1;
        }
        current = current > 0 ? current + value : value;
        if (current > maximum)
        {
            maximum = current;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
