#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("The sum of %d and %d is %d\n", a, b, c);

    return 0;
}
