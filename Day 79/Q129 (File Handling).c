/* A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. */
#include <stdio.h>

int main(void)
{
    int value;
    int count = 0;
    long long sum = 0;
    FILE *file = fopen("numbers.txt", "r");

    if (file == NULL)
    {
        return 1;
    }
    while (fscanf(file, "%d", &value) == 1)
    {
        sum += value;
        ++count;
    }
    int failed = ferror(file);
    if (fclose(file) != 0)
    {
        failed = 1;
    }
    if (failed || count == 0)
    {
        return 1;
    }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
