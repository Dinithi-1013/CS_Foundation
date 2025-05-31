#include <stdio.h> // Include the standard input/output library for functions like printf and getchar

int main() {
    char input[1000]; // Declare a character array (string) to store up to 999 characters plus the null terminator
    int i = 0;        // Initialize an integer variable 'i' to use as an index for the input array
    char ch;          // Declare a character variable to temporarily store each input character

    printf("Enter a line of text (press Enter to finish):\n"); // Prompt the user for input

    // Start a loop to read characters one by one from standard input
    // Continue looping as long as:
    //   - The character read is not a newline character ('\n')
    //   - The index 'i' is less than 999 (to avoid buffer overflow)
    while ((ch = getchar()) != '\n' && i < 999) {
        input[i] = ch; // Store the character in the input array at position 'i'
        i++;           // Increment the index to move to the next position
    }

    input[i] = '\0'; // After the loop, add a null terminator to mark the end of the string

    printf("\nYou entered: %s\n", input); // Print the string entered by the user

    return 0; // Return 0 to indicate successful program execution
}
