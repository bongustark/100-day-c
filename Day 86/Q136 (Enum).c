/* Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void)
{
    char input[16];
    long long first;
    long long second;
    enum Operation operation;

    if (scanf("%15s%lld%lld", input, &first, &second) != 3)
    {
        return 1;
    }
    if (strcmp(input, "ADD") == 0)
    {
        operation = ADD;
    }
    else if (strcmp(input, "SUBTRACT") == 0)
    {
        operation = SUBTRACT;
    }
    else if (strcmp(input, "MULTIPLY") == 0)
    {
        operation = MULTIPLY;
    }
    else
    {
        return 1;
    }
    switch (operation)
    {
    case ADD:
        printf("%lld\n", first + second);
        break;
    case SUBTRACT:
        printf("%lld\n", first - second);
        break;
    case MULTIPLY:
        printf("%lld\n", first * second);
        break;
    }
    return 0;
}
