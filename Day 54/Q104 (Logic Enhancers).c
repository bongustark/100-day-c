/* Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input. */
#include <stdio.h>

static long long triangular(long long value)
{
    long long first = value;
    long long second = value + 1;

    if (first % 2 == 0)
    {
        first /= 2;
    }
    else
    {
        second /= 2;
    }
    return first * second;
}

int main(void)
{
    long long number;
    long long low = 1;
    long long high;

    if (scanf("%lld", &number) != 1 || number < 1 || number > 4294967295LL)
    {
        return 1;
    }
    high = number;
    while (low <= high)
    {
        long long middle = low + (high - low) / 2;
        long long left_sum = triangular(middle);
        long long right_sum = triangular(number) - triangular(middle - 1);
        if (left_sum == right_sum)
        {
            printf("%lld\n", middle);
            return 0;
        }
        if (left_sum < right_sum)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }
    puts("-1");
    return 0;
}
