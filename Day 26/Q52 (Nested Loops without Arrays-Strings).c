/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

 */
#include <stdio.h>
int main(void)
{
    const int stars[] = {1, 3, 5, 3, 1};
    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < stars[row]; column++) printf("* ");
        putchar('\n');
    }
    return 0;
}
