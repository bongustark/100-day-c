/* Write a program to check if a number is a palindrome. */
#include <stdio.h>
int main(void)
{
    long long number, original, reverse = 0;
    if (scanf("%lld", &number) != 1 || number < 0)return 1;
    original = number;
    do
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    while (number);
    puts(reverse == original ? "Palindrome" : "Not palindrome");
    return 0;
}
