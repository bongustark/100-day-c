/* Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    int values[MAX_SIZE];
    int candidate = 0;
    int balance = 0;
    int occurrences = 0;

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
        if (balance == 0)
        {
            candidate = values[i];
        }
        balance += values[i] == candidate ? 1 : -1;
    }
    for (int i = 0; i < count; ++i)
    {
        occurrences += values[i] == candidate;
    }
    printf("%d\n", occurrences > count / 2 ? candidate : -1);
    return 0;
}
