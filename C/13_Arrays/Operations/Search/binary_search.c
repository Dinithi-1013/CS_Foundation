#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Must be sorted
    int size = 5;
    int target = 3;
    int result = binarySearch(arr, size, target);
    printf("Element %d found at index %d\n", target, result); // Output: Element 3 found at index 2
    return 0;
}