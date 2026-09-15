/* Add two matrices. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;
    int first[MAX_DIMENSION][MAX_DIMENSION];

    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || columns < 1 ||
            rows > MAX_DIMENSION || columns > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < columns; ++column)
        {
            if (scanf("%d", &first[row][column]) != 1)
            {
                return 1;
            }
        }
    }
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < columns; ++column)
        {
            int value;
            if (scanf("%d", &value) != 1)
            {
                return 1;
            }
            first[row][column] += value;
        }
    }
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < columns; ++column)
        {
            printf("%s%d", column == 0 ? "" : " ", first[row][column]);
        }
        putchar('\n');
    }
    return 0;
}
