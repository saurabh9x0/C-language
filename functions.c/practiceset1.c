//wap to find avg of three numbers


#include<stdio.h>

float avg(float,float,float);

int main(){
    int a,b,c;
    printf("enter the three values: ");
    scanf("%d%d%d",&a,&b,&c);
    float d= avg(a,b,c);
    printf("the avg value is %.2f\n",d);
    return 0;

}
float avg(float a ,float b,float c){
    return(a+b+c)/3;
    
}

