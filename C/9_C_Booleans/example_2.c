#include <stdio.h>

int main() {
    int age = 20; // Declare and initialize age to 20

    // Check if age is greater than or equal to 18 (adult)
    int adult = age >= 18;

    // If adult is true (non-zero), print "Adult"
    if (adult) printf("Adult\n");

    // Print the value of adult (1 for true, 0 for false)
    printf("%d\n", adult);

    return 0; // Indicate successful program termination
}