#include <stdio.h> // Include standard input/output header

int main() {
    // Declare integer variable 'yes' and assign value 1 (true)
    int yes = 1;
    // Declare integer variable 'no' and assign value 0 (false)
    int no = 0;
    // Print the values of 'yes' and 'no'
    printf("yes: %d, no: %d\n", yes, no);
    return 0; // Indicate successful program termination
}

/**
 * Note: The C language does not have built-in boolean types such as 'true' or 'false'.
 * To use boolean values in C, you need to include the <stdbool.h> header file,
 * which defines 'bool', 'true', and 'false' for use in your code.
 */