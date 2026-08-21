/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>
int main(void)
{
    long a, b;
    char op;
    if (scanf("%ld %ld %c", &a, &b, &op) != 3)return 1;
    switch (op)
    {
    case '+':
        printf("%ld\n", a + b);
        break;
    case '-':
        printf("%ld\n", a - b);
        break;
    case '*':
        printf("%ld\n", a * b);
        break;
    case '/':
        if (b == 0)return 1;
        printf("%ld\n", a / b);
        break;
    case '%':
        if (b == 0)return 1;
        printf("%ld\n", a % b);
        break;
    default:
        return 1;
    }
    return 0;
}
