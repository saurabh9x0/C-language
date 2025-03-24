#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Modify the array based on index
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            arr[i] *= 2; // Double the value of odd indexed elements
        } else {
            arr[i] += 10; // Increment the value of even indexed elements by 10
        }
    }

    // Print the modified array
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
