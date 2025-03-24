//sum of 10 natural number using while


#include<stdio.h>

int main(){
    
    int n=1,sum=0;
    
    while (n<=10)
    {
        sum += n;
        n++;
    }
    printf("the sum of 10 natural number is %d\n",sum);
    


    return 0;
}

