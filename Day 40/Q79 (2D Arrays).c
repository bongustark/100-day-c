/* Perform diagonal traversal of a matrix. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;
    int matrix[MAX_DIMENSION][MAX_DIMENSION];
    int first = 1;

    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || columns < 1 ||
            rows > MAX_DIMENSION || columns > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < columns; ++column)
        {
            if (scanf("%d", &matrix[row][column]) != 1)
            {
                return 1;
            }
        }
    }
    for (int diagonal = 0; diagonal < rows + columns - 1; ++diagonal)
    {
        int low_row = diagonal - (columns - 1);
        int high_row = diagonal;
        if (low_row < 0)
        {
            low_row = 0;
        }
        if (high_row >= rows)
        {
            high_row = rows - 1;
        }
        if (diagonal % 2 == 0)
        {
            for (int row = high_row; row >= low_row; --row)
            {
                int column = diagonal - row;
                printf("%s%d", first ? "" : " ", matrix[row][column]);
                first = 0;
            }
        }
        else
        {
            for (int row = low_row; row <= high_row; ++row)
            {
                int column = diagonal - row;
                printf("%s%d", first ? "" : " ", matrix[row][column]);
                first = 0;
            }
        }
    }
    putchar('\n');
    return 0;
}
