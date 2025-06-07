#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index of target
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int size = 5;
    int target = 8;
    int result = linearSearch(arr, size, target);
    printf("Element %d found at index %d\n", target, result); // Output: Element 8 found at index 2
    return 0;
}