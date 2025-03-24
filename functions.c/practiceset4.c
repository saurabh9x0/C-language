#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int n=7; 
    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));

    return 0;
}

// Function definition
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
