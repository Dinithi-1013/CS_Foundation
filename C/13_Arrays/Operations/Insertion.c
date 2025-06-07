#include <stdio.h>
#define MAX_SIZE 100

void insert(int arr[], int *size, int pos, int value) {
    if (*size >= MAX_SIZE || pos < 0 || pos > *size) {
        printf("Invalid position or array full\n");
        return;
    }
    // Shift elements to the right
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4};
    int size = 4;
    insert(arr, &size, 2, 99); // Insert 99 at index 2
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 1 2 99 3 4
    }
    return 0;
}