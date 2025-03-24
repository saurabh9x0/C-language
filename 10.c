// Given an integer n .Create an array contatining sq. of all natural numbers till n and print the elements of the array

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value for n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i - 1] = i * i;
    }
    printf("The squares of natural numbers up to %d are:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}