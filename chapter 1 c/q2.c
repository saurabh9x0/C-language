/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float r, c, h, v;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    c = 3.14 * r * r;
    printf("The radius of the circle is %.2f and the area of the circle is %.2f\n", r, c);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &h); 
    v = 3.14 * r * r * h;
    printf("The volume of the cylinder is %.2f\n", v);

    return 0;
}
