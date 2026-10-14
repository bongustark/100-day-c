/* Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int first_count;
    int second_count;
    int first[MAX_SIZE];
    int second[MAX_SIZE];
    int a = 0;
    int b = 0;
    int output_count = 0;

    if (scanf("%d", &first_count) != 1 || first_count < 0 || first_count > MAX_SIZE)
    {
        return 1;
    }
    for (int i = 0; i < first_count; ++i)
    {
        if (scanf("%d", &first[i]) != 1)
        {
            return 1;
        }
    }
    if (scanf("%d", &second_count) != 1 || second_count < 0 ||
            second_count > MAX_SIZE || first_count + second_count > MAX_SIZE)
    {
        return 1;
    }
    for (int i = 0; i < second_count; ++i)
    {
        if (scanf("%d", &second[i]) != 1)
        {
            return 1;
        }
    }
    while (a < first_count || b < second_count)
    {
        int value;
        if (b == second_count || (a < first_count && first[a] <= second[b]))
        {
            value = first[a++];
        }
        else
        {
            value = second[b++];
        }
        printf("%s%d", output_count++ == 0 ? "" : " ", value);
    }
    putchar('\n');
    return 0;
}
