/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("enter the marks:");
    scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/3;
        if (a>33 && b>33 &&c>33){
    if(d>40){
        
    {
        printf("you passed the subject\n");
    }
    }
    else{
        ("fail ho madhrchod\n");
    }}
        
    else{
        printf("gandu hay tu rand k balak");
    }
    return 0;

    

}