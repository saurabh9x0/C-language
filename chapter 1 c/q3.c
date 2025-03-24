/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit)*/


#include<stdio.h>
int main(){
    float C,F;
    printf("enter the value of C: ",C);
    scanf("%f",&C);
    F=(C * 9/5) + 32;
    printf("temperature in celsius is %.2f and temperature in F is %.2f\n",C,F);
    return 0;
}