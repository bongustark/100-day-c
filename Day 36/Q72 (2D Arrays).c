/* Find the sum of all elements in a matrix. */
#include <stdio.h>

#define MAX_DIMENSION 100

int main(void)
{
    int rows;
    int columns;
    long long sum = 0;

    if (scanf("%d%d", &rows, &columns) != 2 || rows < 1 || columns < 1 ||
            rows > MAX_DIMENSION || columns > MAX_DIMENSION)
    {
        return 1;
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
            sum += value;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
