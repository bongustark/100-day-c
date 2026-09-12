/* Find the second largest element in an array. */
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int count;
    long long value;
    long long largest = LLONG_MIN;
    long long second = LLONG_MIN;
    int found_largest = 0;
    int found_second = 0;

    if (scanf("%d", &count) != 1 || count < 2 || count > 10000)
    {
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        if (scanf("%lld", &value) != 1)
        {
            return 1;
        }
        if (!found_largest || value > largest)
        {
            if (found_largest)
            {
                second = largest;
                found_second = 1;
            }
            largest = value;
            found_largest = 1;
        }
        else if (value < largest && (!found_second || value > second))
        {
            second = value;
            found_second = 1;
        }
    }
    if (found_second)
    {
        printf("%lld\n", second);
    }
    else
    {
        puts("-1");
    }
    return 0;
}
