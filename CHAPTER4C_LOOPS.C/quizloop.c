//print n nutural number

#include<stdio.h>

int main(){
    int n;
    printf("enter the valuee  ");
    scanf("%d   ",&n);
    for (int i = 1; i<= n; i++)
    { if(i==25){break;
    /*.continue; is used to skip the iteration*/}
        printf("the number is %d\n",i);
    }
    
    return 0;
}