/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */
#include <stdio.h>
int main(void)
{
    for (int row = 1; row <= 9; row++)
    {
        int width = row <= 5 ? 2 * row - 1 : 2 * (10 - row) - 1;
        for (int column = 0; column < width; column++) putchar('*');
        putchar('\n');
    }
    return 0;
}
