// swaping numberssss......
#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("enter the two numbers:");
    scanf("%d%d", &x, &y);
    int swap = x;
    x = y;
    y = x;
    printf("%d%d\n", x, swap);
    return 0;
}