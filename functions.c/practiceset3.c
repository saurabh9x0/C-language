//wap a function to calculate force of attraction on a body of mass 'm' exerted by earth.Considering g=9.8m/s^2//



#include<stdio.h>

double cal(double);

int main(){
    double m;
    printf("enter the value of m ");
    scanf("%lf",&m);
    double force =cal(m);
    printf("the force of attraction is %.3lf",force);
    return 0;
}

double cal(double m){ const double g=9.8;
    return m*g;
}