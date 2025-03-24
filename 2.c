//swaping no. using pointrs

#include<stdio.h>

int swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int x;
    scanf("%d",&x);

    int y;

    scanf("%d",&y);
    printf("%d %d\n",x,y);

    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}

