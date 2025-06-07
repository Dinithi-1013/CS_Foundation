#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int size = 5;
    selectionSort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 1 2 5 8 12
    }
    return 0;
}