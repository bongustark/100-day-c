/* Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    int window;
    long long values[MAX_SIZE];
    long long sum = 0;
    long long maximum;

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
    }
    if (scanf("%d", &window) != 1 || window < 1 || window > count)
    {
        return 1;
    }
    for (int i = 0; i < window; ++i)
    {
        sum += values[i];
    }
    maximum = sum;
    for (int i = window; i < count; ++i)
    {
        sum += values[i] - values[i - window];
        if (sum > maximum)
        {
            maximum = sum;
        }
    }
    printf("%lld\n", maximum);
    return 0;
}
