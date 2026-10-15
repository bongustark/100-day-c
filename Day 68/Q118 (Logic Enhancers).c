/* Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number */
#include <stdio.h>

#define MAX_SIZE 1000000

int main(void)
{
    int count;
    long long missing;

    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE)
    {
        return 1;
    }
    missing = count;
    for (int value = 0; value < count; ++value)
    {
        int input;
        if (scanf("%d", &input) != 1 || input < 0 || input > count)
        {
            return 1;
        }
        missing ^= value;
        missing ^= input;
    }
    printf("%lld\n", missing);
    return 0;
}
