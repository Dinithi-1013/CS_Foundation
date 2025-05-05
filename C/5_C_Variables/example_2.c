#include <stdio.h>

int main() {
    // Declare an integer variable 'num' and initialize it with the value 5
    int num = 5;

    // Print the initial value of 'num' using %d (format specifier for integers)
    printf("Initial value of num: %d\n", num);

    // Update the value of 'num' to 12
    num = 12;

    // Print the updated value of 'num' using %d
    printf("Updated value of num: %d\n", num);

    return 0;
}

// Explanation:
// - The variable 'num' is declared as an integer and initialized with a value.
// - The 'printf' function is used to display the value of 'num'.
// - The format specifier %d is used to print an integer value.