//print n nutural number

#include<stdio.h>

int main(){
    int n;
    printf("enter the valuee");
    scanf("%d",&n);
    for (int i = 1; i<= n; i++)
    { if(i==5){break;}
        printf("the number is %d\n",i);
    }
    
    return 0;
}