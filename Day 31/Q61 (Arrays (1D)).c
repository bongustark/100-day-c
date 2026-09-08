/* Search for an element in an array using linear search. */
#include <stdio.h>
int main(void)
{
    int n, values[100], target, index = -1;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &target) != 1) return 1;
    for (int i = 0; i < n; i++) if (values[i] == target)
        {
            index = i;
            break;
        }
    if (index >= 0) printf("Found at index %d\n", index);
    else puts("-1");
    return 0;
}
