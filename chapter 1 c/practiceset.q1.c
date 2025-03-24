/*. Write a C program to calculate area of a rectangle:
Using inputs supplied by the user.
*/

#include <stdio.h>

int main() {
    float l, w, area;
    printf("Enter the length and width: ");
    scanf("%f %f", &l, &w);  
    area = l * w;  
    printf("The length is %.2f, the width is %.2f, and the area is %.2f\n", l, w, area);  // Print the results
    return 0;
}
