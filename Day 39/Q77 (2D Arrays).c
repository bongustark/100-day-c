/* Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;
    int matrix[MAX_DIMENSION][MAX_DIMENSION];
    int distinct = 1;

    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || rows != columns ||
            rows > MAX_DIMENSION)
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
    for (int i = 0; i < rows; ++i)
    {
        for (int j = i + 1; j < rows; ++j)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
            }
        }
    }
    puts(distinct ? "True" : "False");
    return 0;
}
