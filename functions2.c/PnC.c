#include <stdio.h>
#include <math.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;
    printf("Enter the numbers: ");
    scanf("%d %d", &n, &r);
    int ans = ncr(n, r);
    printf("%d\n", ans);
  
    return 0;
}
