#include <stdio.h>

// Function to get input using getchar (reads one char at a time)
void input_with_getchar(char *buffer, int size) {
    int i = 0;
    char ch;
    printf("Enter a string (getchar): ");
    while (i < size - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
}

// Function to get input using scanf (reads until whitespace)
void input_with_scanf(char *buffer, int size) {
    printf("Enter a string (scanf): ");
    scanf("%s", buffer); // Reads until whitespace
}

// Function to get input using fgets (reads a line)
void input_with_fgets(char *buffer, int size) {
    printf("Enter a string (fgets): ");
    fgets(buffer, size, stdin);
    // Remove trailing newline if present
    int i = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char buffer[100];

    // Uncomment one function at a time to see the difference

    // input_with_getchar(buffer, sizeof(buffer));
    // input_with_scanf(buffer, sizeof(buffer));
    input_with_fgets(buffer, sizeof(buffer));

    printf("You entered: %s\n", buffer);

    return 0;
}