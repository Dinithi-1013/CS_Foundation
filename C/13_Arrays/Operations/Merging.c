#include <stdio.h>
#define MAX_SIZE 100

void merge(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    // Merge while both arrays have elements
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    // Copy remaining elements from arr1, if any
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    // Copy remaining elements from arr2, if any
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = 3, size2 = 3;
    int result[MAX_SIZE];
    merge(arr1, size1, arr2, size2, result);
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]); // Output: 1 2 3 4 5 6
    }
    return 0;
}