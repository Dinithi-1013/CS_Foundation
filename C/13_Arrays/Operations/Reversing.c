#include <stdio.h>

// Function to reverse the elements of an array
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        // Swap elements
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    // Initialize array
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call reverse function
    reverse(arr, size);

    // Print reversed array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 5 4 3 2 1
    }
    return 0;
}