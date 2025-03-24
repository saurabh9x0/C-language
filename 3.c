// passing value from array to function

#include <stdio.h>
void change(int x[50])
{
    x[2] = 90;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / 9;
    printf("%d\n", n);
    printf("%d\n", arr[2]);
    change(arr);
    printf("%d\n", arr[2]);
    return 0;
}