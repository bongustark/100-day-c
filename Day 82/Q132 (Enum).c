/* Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. */
#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void)
{
    char input[16];
    enum TrafficLight light;

    if (scanf("%15s", input) != 1)
    {
        return 1;
    }
    if (strcmp(input, "RED") == 0)
    {
        light = RED;
    }
    else if (strcmp(input, "YELLOW") == 0)
    {
        light = YELLOW;
    }
    else if (strcmp(input, "GREEN") == 0)
    {
        light = GREEN;
    }
    else
    {
        return 1;
    }
    switch (light)
    {
    case RED:
        puts("Stop");
        break;
    case YELLOW:
        puts("Wait");
        break;
    case GREEN:
        puts("Go");
        break;
    }
    return 0;
}
