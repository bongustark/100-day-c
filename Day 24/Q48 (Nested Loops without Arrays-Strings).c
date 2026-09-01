/* Write a program to print the following pattern:
1
12
123
1234
12345 */
#include <stdio.h>
int main(void)
{
    for (int row = 1; row <= 5; row++)
    {
        for (int column = 1; column <= row; column++) printf("%d", column);
        putchar('\n');
    }
    return 0;
}
