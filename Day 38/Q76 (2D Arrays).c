/* Check if a matrix is symmetric. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int size;
    int columns;
    int matrix[MAX_DIMENSION][MAX_DIMENSION];
    int symmetric = 1;

    if (scanf("%d%d", &size, &columns) != 2 || size < 1 || size != columns ||
            size > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < size; ++row)
    {
        for (int column = 0; column < size; ++column)
        {
            if (scanf("%d", &matrix[row][column]) != 1)
            {
                return 1;
            }
        }
    }
    for (int row = 0; row < size; ++row)
    {
        for (int column = row + 1; column < size; ++column)
        {
            if (matrix[row][column] != matrix[column][row])
            {
                symmetric = 0;
            }
        }
    }
    puts(symmetric ? "True" : "False");
    return 0;
}
