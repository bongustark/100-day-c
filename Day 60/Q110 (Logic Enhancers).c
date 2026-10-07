/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    int window;
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
    if (scanf("%d", &window) != 1 || window < 1 || window > count)
    {
        return 1;
    }
    for (int start = 0; start + window <= count; ++start)
    {
        int maximum = values[start];
        for (int i = start + 1; i < start + window; ++i)
        {
            if (values[i] > maximum)
            {
                maximum = values[i];
            }
        }
        printf("%s%d", start == 0 ? "" : " ", maximum);
    }
    putchar('\n');
    return 0;
}
