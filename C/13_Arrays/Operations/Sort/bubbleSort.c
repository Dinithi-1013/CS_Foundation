#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int size = 5;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 1 2 5 8 12
    }
    return 0;
}