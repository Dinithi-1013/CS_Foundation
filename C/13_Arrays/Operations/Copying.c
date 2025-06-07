#include <stdio.h>
#define MAX_SIZE 100

void copy(int src[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int src[] = {1, 2, 3, 4};
    int size = 4;
    int dest[MAX_SIZE];
    copy(src, dest, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]); // Output: 1 2 3 4
    }
    return 0;
}