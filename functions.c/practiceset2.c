#include <stdio.h>
#include <math.h>

// Function prototype
float tep(float c);

int main()
{
    float c = 45;
    printf("Celsius: %.2f -> Fahrenheit: %.2f\n", c, tep(c));

    return 0;
}

// Function definition
float tep(float c)
{
    return (9.0 / 5.0) * c + 32;
}
