/* Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. */
#include <stdio.h>

#define MAX_SIZE 100000

int main(void)
{
    int count;
    long long values[MAX_SIZE];
    long long prefix = 1;

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
    for (int i = 0; i < count; ++i)
    {
        long long suffix = 1;
        for (int j = i + 1; j < count; ++j)
        {
            suffix *= values[j];
        }
        printf("%s%lld", i == 0 ? "[" : ",", prefix * suffix);
        prefix *= values[i];
    }
    puts("]");
    return 0;
}
