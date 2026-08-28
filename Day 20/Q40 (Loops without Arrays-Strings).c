/* Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>
int main(void)
{
    char binary[256];
    if (scanf("%255s", binary) != 1)return 1;
    for (size_t i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')return 1;
        binary[i] = binary[i] == '0' ? '1' : '0';
    }
    puts(binary);
    return 0;
}
