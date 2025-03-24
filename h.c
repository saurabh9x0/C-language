//find the max value out of elements in array.

#include<stdio.h>

int main(){
    int arr[]={3,44,66,87,980};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=1;i<n;i++ ){
        if(mx<arr[i]) mx=arr[i];
    }
    printf("%d",mx);

 

}