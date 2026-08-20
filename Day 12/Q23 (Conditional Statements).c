/* Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */
#include <stdio.h>
int main(void)
{
    int days, fine = 0;
    if (scanf("%d", &days) != 1 || days < 0)return 1;
    if (days > 30)puts("Membership Cancelled");
    else
    {
        fine = (days > 5 ? 10 : days * 2);
        if (days > 5)fine += (days > 10 ? 20 : (days - 5) * 4);
        if (days > 10)fine += (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    }
    return 0;
}
