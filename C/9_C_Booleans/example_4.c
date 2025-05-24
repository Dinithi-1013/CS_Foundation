#include <stdio.h>      // Include standard input/output header for printf
#include <stdbool.h>    // Include header for boolean type support

int main() {
    int x = 5, y = 10;  // Declare and initialize two integer variables x and y
    // Evaluate if x is greater than 0 AND y is less than 15, store result in 'both'
    bool both = (x > 0) && (y < 15);
    // Print the result: 1 if both conditions are true, 0 otherwise
    printf("Both true: %d\n", both);
    return 0;           // Indicate successful program termination
}