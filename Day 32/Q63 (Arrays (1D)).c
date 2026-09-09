/* Merge two arrays. */
#include <stdio.h>
int main(void)
{
    int first_count, second_count, values[200];
    if (scanf("%d", &first_count) != 1 || first_count < 0 || first_count > 100) return 1;
    for (int i = 0; i < first_count; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &second_count) != 1 || second_count < 0 || first_count + second_count > 200) return 1;
    for (int i = 0; i < second_count; i++) if (scanf("%d", &values[first_count + i]) != 1) return 1;
    for (int i = 0; i < first_count + second_count; i++) printf("%d%s", values[i], i + 1 == first_count + second_count ? "\n" : " ");
    return 0;
}
