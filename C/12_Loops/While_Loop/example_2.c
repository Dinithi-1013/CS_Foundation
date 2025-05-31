#include <stdio.h>

int main() {
    int i = 1; // Initialize counter variable i to 1

    // Start of do-while loop
    do {
        printf("%d\n", i); // Print the current value of i
        i++;               // Increment i by 1
    } while (i <= 5);      // Continue loop while i is less than or equal to 5

    return 0; // Indicate successful program termination
}