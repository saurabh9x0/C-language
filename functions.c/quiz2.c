//use lib function to calculate area of square 

#include<stdio.h>
#include<math.h>

double area(double);

int main(){
    double side;
    printf("enter the value ");
    scanf("%lf",&side);
    double A = area(side );
    printf("area is %.2lf\n",A);


    return 0;

}
double area(double side){
    return pow(side,2);
}