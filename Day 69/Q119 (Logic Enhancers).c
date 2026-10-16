/* Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

static size_t hash_value(int value, size_t capacity)
{
    uint32_t bits = (uint32_t)value;
    bits ^= bits >> 16;
    bits *= UINT32_C(0x7feb352d);
    bits ^= bits >> 15;
    bits *= UINT32_C(0x846ca68b);
    bits ^= bits >> 16;
    return (size_t)bits & (capacity - 1);
}

int main(void)
{
    int count;
    size_t capacity = 1;
    int *keys;
    unsigned char *used;

    if (scanf("%d", &count) != 1 || count < 2 || count > MAX_SIZE)
    {
        return 1;
    }
    while (capacity < (size_t)count * 2)
    {
        capacity *= 2;
    }
    keys = malloc(capacity * sizeof *keys);
    used = calloc(capacity, sizeof *used);
    if (keys == NULL || used == NULL)
    {
        free(keys);
        free(used);
        return 1;
    }
    for (int i = 0; i < count; ++i)
    {
        int value;
        if (scanf("%d", &value) != 1)
        {
            free(keys);
            free(used);
            return 1;
        }
        size_t index = hash_value(value, capacity);
        while (used[index] && keys[index] != value)
        {
            index = (index + 1) & (capacity - 1);
        }
        if (used[index])
        {
            printf("%d\n", value);
            free(keys);
            free(used);
            return 0;
        }
        keys[index] = value;
        used[index] = 1;
    }
    puts("-1");
    free(keys);
    free(used);
    return 0;
}
