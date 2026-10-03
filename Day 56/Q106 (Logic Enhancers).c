/* Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
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
    for (int i = 0; i < count; ++i)
    {
        int next = -1;
        for (int j = i + 1; j < count; ++j)
        {
            if (values[j] > values[i])
            {
                next = values[j];
                break;
            }
        }
        printf("%s%d", i == 0 ? "" : ", ", next);
    }
    putchar('\n');
    return 0;
}
