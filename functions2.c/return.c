#include <stdio.h>

int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{

    int a, b;
    printf("enter the numbers:");

    scanf("%d%d", &a, &b);
    int m = min(a, b);
    printf("minimum of %d and %d is %d", a, b, m);
    return 0;
}
