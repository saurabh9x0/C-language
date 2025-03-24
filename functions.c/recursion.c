#include <stdio.h>

// Function prototype
int fact(int);

// Main function
int main() {
    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    int result = fact(number);
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}

// Function definition
int fact(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}
