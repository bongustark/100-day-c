/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output. */
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
        int first_negative = 0;
        for (int i = start; i < start + window; ++i)
        {
            if (values[i] < 0)
            {
                first_negative = values[i];
                break;
            }
        }
        printf("%s%d", start == 0 ? "" : " ", first_negative);
    }
    putchar('\n');
    return 0;
}
