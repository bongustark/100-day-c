/* Find the transpose of a matrix. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;
    int matrix[MAX_DIMENSION][MAX_DIMENSION];

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
    for (int column = 0; column < columns; ++column)
    {
        for (int row = 0; row < rows; ++row)
        {
            printf("%s%d", row == 0 ? "" : " ", matrix[row][column]);
        }
        putchar('\n');
    }
    return 0;
}
