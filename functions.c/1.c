#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main() {
    int a = 7;
    int b = 45;
  int c=sum(a, b); //function call

    int a1 = 70;
    int b2 = 45;
    sum(a1, b2);

    int a2 = 70;
    int b3 = 405;
    sum(a2, b3);

    return 0;
}
 