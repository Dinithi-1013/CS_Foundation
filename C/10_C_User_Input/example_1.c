#include <stdio.h> // Include standard input/output header

int main() {
    char ch;                // Variable to store each character input
    int i;                  // Loop counter
    char buffer[100];       // Buffer to store user input (up to 100 chars, but we use only 10)

    printf("Enter up to 10 characters (press Enter to finish):\n");

    // Read up to 10 characters or until newline is encountered
    for (i = 0; i < 10; i++) {
        ch = getchar();         // Read a single character from input
        if (ch == '\n') {       // If Enter is pressed, stop reading
            break;
        }
        buffer[i] = ch;         // Store the character in the buffer
    }

    printf("You entered: ");
    // Print the characters stored in the buffer
    for (int j = 0; j < i; j++) {
        putchar(buffer[j]);     // Output each character
    }
    printf("\n");               // Print a newline at the end

    return 0;                   // Indicate successful program termination
}


/**
 * Reads the next character from standard input (stdin).
 * 
 * @return The next character from stdin as an unsigned char cast to an int,
 *         or EOF if end of file or error occurs.
 */