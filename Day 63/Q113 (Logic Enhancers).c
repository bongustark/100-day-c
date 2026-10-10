/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output. */
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

static int compare_ints(const void *left, const void *right)
{
    int first = *(const int *)left;
    int second = *(const int *)right;
    return (first > second) - (first < second);
}

int main(void)
{
    int count;
    int rank;
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
    if (scanf("%d", &rank) != 1 || rank < 1 || rank > count)
    {
        return 1;
    }
    qsort(values, (size_t)count, sizeof values[0], compare_ints);
    printf("%d\n", values[rank - 1]);
    return 0;
}
