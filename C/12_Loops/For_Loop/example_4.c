#include <stdio.h>
// #include <windows.h> // For Sleep() on Windows
#include <unistd.h>

int main() {
    int i, j, rows;

    // Ask the user to enter number of rows
    printf("Enter number of rows for the pattern: ");
    scanf("%d", &rows); // Read user input

    printf("\nSymmetrical Star Pattern:\n\n");

    // Loop using two variables: i goes up, j goes down
    for (i = 1, j = rows; i <= rows && j >= 1; i++, j--) {
        
        // Print left-side stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        // Print middle spaces (2*j - 2)
        for (int k = 1; k <= (2 * j - 2); k++) {
            printf(" ");
        }

        // Print right-side stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");

        // Delay for animation (200 milliseconds)
        // Sleep(200); //For windows
        usleep(200000);
    }

    return 0;
}
