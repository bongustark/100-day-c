/* Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;

    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || columns < 1 ||
            rows > MAX_DIMENSION || columns > MAX_DIMENSION)
    {
        return 1;
    }
    for (int row = 0; row < rows; ++row)
    {
        long long sum = 0;
        for (int column = 0; column < columns; ++column)
        {
            int value;
            if (scanf("%d", &value) != 1)
            {
                return 1;
            }
            sum += value;
        }
        printf("%s%lld", row == 0 ? "" : " ", sum);
    }
    putchar('\n');
    return 0;
}
