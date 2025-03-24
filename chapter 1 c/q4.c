/*Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float SI, P, R, T;
    printf("please enter the value for P,R & T ", P, R, T);
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("the value is %f\n",SI);
    return 0;
}