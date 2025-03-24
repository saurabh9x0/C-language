//calculate the sum of all the elements in the given array

#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,66,7,0,8,88,9,9,9,9,9,99};

    int n=sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}