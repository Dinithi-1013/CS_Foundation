#include <stdio.h>
#include <stdbool.h> // Include the bool library

int main() {
    int x = 5, y = 10; // Declare and initialize two integers

    // Check if x is greater than 0 AND y is less than 15
    bool both = (x > 0) && (y < 15);

    // Print the result (1 for true, 0 for false)
    printf("Both true: %d\n", both);

    return 0; // End of program
}
/*
 * Note:
 * - The <stdbool.h> library is included to allow the use of the 'bool' type and boolean values 'true' and 'false' in C.
 * - Booleans in C are represented as integers: 1 for true, 0 for false.
 * - The variable 'both' stores the result of a logical AND operation between two conditions.
 */
