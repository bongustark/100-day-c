/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>
int main(void)
{
    double cost, sell;
    if (scanf("%lf %lf", &cost, &sell) != 2 || cost <= 0)return 1;
    if (sell > cost)printf("Profit %.2f%%\n", (sell - cost) * 100.0 / cost);
    else if (sell < cost)printf("Loss %.2f%%\n", (cost - sell) * 100.0 / cost);
    else puts("No Profit No Loss");
    return 0;
}
