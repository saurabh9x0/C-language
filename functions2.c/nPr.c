#include <stdio.h>

int fact(int x) {
    int f = 1;  // Initialize f to 1
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int npr(int a, int b) {
    return fact(a) / fact(a - b);  // Use a comma between the parameters
}

int main() {
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d%d", &a, &b);
    int ans = npr(a, b);
    printf("%d\n", ans);  // Print the result

    return 0;
}
