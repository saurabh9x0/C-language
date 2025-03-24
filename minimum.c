//find minimum value from given array

#include<stdio.h>

int main(){
    int arr[]={33,44,66,7,8,9,-3};
    int n=sizeof(arr)/4;
    int min=arr[0];
    for(int i=0;i<n; i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("%d",min);

    return 0;
}