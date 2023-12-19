#include <math.h>
#include <stdio.h>

float POINTdist(int x1, int y1, int x2, int y2)
{
    return sqrt((float)(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

int main()
{
    printf("%.2f", POINTdist(1, 2, 3, 4));
    return 0;
}