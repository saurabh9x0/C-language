#include<stdio.h>

int main(){

    int x;
    int *j=&x;
    printf("%p\n ",j);
    
    printf("%p",&x);
    return 0;
} 