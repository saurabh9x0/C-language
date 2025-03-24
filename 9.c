//calculate the product of given element in array

#include<stdio.h>

int main(){

    int arr[]={1,9,9};

    int n=sizeof(arr)/sizeof(arr[0]);

    int m=1;
    for(int i=0;i<n;i++){
        m=m*arr[i];
        
    }
    printf("%d",m);
    return 0;
}