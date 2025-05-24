#include <stdio.h>

int main() {
    char buffer[100];

    printf("Enter a string (max 99 characters): ");
    // fgets reads at most sizeof(buffer)-1 characters from stdin
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("You entered: %s", buffer);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

/**
 * @brief Reads a single character from the specified file stream.
 *
 * This function attempts to read the next character from the given FILE pointer.
 * If successful, it returns the character as an unsigned char cast to an int.
 * On end-of-file or error, it returns EOF.
 *
 * @param stream Pointer to a FILE object that identifies the input stream.
 * @return The character read as an unsigned char cast to an int, or EOF on end-of-file or error.
 */