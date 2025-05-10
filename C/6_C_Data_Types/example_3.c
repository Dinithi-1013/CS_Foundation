#include <stdio.h>

int main() {
    // A 'char' is a data type in C used to store a single character.
    // It typically takes 1 byte of memory and can store any character from the ASCII table.
    char letter = 'B'; // Here, we store the character 'B' in the variable 'letter'.

    // Printing the character using the %c placeholder.
    printf("Letter (using %%c): %c\n", letter);

    // If we use the %d placeholder, it will print the ASCII value of the character.
    printf("ASCII value (using %%d): %d\n", letter);

    // Changing the character to demonstrate how it works.
    letter = 'A';
    printf("Updated Letter (using %%c): %c\n", letter);
    printf("Updated ASCII value (using %%d): %d\n", letter);

    return 0;
}
