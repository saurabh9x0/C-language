// table for n number taken from the user ..

#include <stdio.h>

int main()
{
    int n;

    printf("enter the value for n  ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d=%d\n", n, i, n * i);
    }

    return 0;
}