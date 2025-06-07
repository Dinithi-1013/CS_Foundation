#include <stdio.h>

int main() {
    // Your code here
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print original values
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Change values: double even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * 2;
        }
    }

    // Print modified values
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/**
 * Calculates the number of elements in the array using sizeof.
 *
 * The sizeof operator returns the size in bytes of its operand.
 * To determine the number of elements in an array, divide the total size
 * of the array (in bytes) by the size of a single element.
 *
 * Example:
 *     int arr[10];
 *     int n = sizeof(arr) / sizeof(arr[0]);
 *     // n will be 10
 *
 * Note: This method only works for arrays whose size is known at compile time,
 * and not for pointers.
 */