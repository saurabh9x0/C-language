#include<stdio.h>

void oddeven(int x){
    if (x%2==0)
    {
        printf("the number is even %d",x);
    }
    else{
        printf("%d is odd",x);
    }
    
}

int main(){
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    oddeven(a);

    return 0;
}