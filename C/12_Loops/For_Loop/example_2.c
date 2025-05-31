#include <stdio.h>

int main() {
    // Loop with two variables: i starts at 1, j starts at 5
    // The loop continues as long as i <= 5
    // On each iteration: i increases by 1, j decreases by 1
    for (int i = 1, j = 5; i <= 5; i++, j--) {
        // Print the current values of i and j
        printf("i: %d, j: %d\n", i, j);
    }
    return 0; // Indicate successful program termination
}