/* Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

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
        int previous = -1;
        for (int j = i - 1; j >= 0; --j)
        {
            if (values[j] > values[i])
            {
                previous = values[j];
                break;
            }
        }
        printf("%s%d", i == 0 ? "" : ", ", previous);
    }
    putchar('\n');
    return 0;
}
