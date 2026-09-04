/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
 */
#include <stdio.h>
int main(void)
{
    for (int row = 1; row <= 7; row++)
    {
        int width = row <= 4 ? 2 * row - 1 : 2 * (8 - row) - 1;
        int spaces = (7 - width) / 2;
        for (int i = 0; i < spaces; i++) putchar(' ');
        for (int i = 0; i < width; i++) putchar('*');
        putchar('\n');
    }
    return 0;
}
