#include <stdio.h>
#define MAX_SIZE 100

void delete(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position\n");
        return;
    }
    // Shift elements to the left
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4};
    int size = 4;
    delete(arr, &size, 1); // Delete element at index 1 (value 2)
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 1 3 4
    }
    return 0;
}