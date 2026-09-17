/* Multiply two matrices. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows_a;
    int columns_a;
    int rows_b;
    int columns_b;
    int first[MAX_DIMENSION][MAX_DIMENSION];
    int second[MAX_DIMENSION][MAX_DIMENSION];
    long long product[MAX_DIMENSION][MAX_DIMENSION] = {{0}};

    if (scanf("%d%d", &rows_a, &columns_a) != 2 || rows_a < 1 || columns_a < 1 ||
            rows_a > MAX_DIMENSION || columns_a > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < rows_a; ++row)
    {
        for (int column = 0; column < columns_a; ++column)
        {
            if (scanf("%d", &first[row][column]) != 1)
            {
                return 1;
            }
        }
    }
    if (scanf("%d%d", &rows_b, &columns_b) != 2 || rows_b != columns_a ||
            columns_b < 1 || rows_b > MAX_DIMENSION || columns_b > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < rows_b; ++row)
    {
        for (int column = 0; column < columns_b; ++column)
        {
            if (scanf("%d", &second[row][column]) != 1)
            {
                return 1;
            }
        }
    }
    for (int row = 0; row < rows_a; ++row)
    {
        for (int column = 0; column < columns_b; ++column)
        {
            for (int inner = 0; inner < columns_a; ++inner)
            {
                product[row][column] += (long long)first[row][inner] * second[inner][column];
            }
        }
    }
    for (int row = 0; row < rows_a; ++row)
    {
        for (int column = 0; column < columns_b; ++column)
        {
            printf("%s%lld", column == 0 ? "" : " ", product[row][column]);
        }
        putchar('\n');
    }
    return 0;
}
