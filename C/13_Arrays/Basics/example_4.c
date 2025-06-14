#include <stdio.h>

int main() {
    // Method 1: Initialize with string literal (automatically adds null terminator)
    char greeting1[] = "Hello";
    printf("greeting1: %s\n", greeting1);
    printf("Length: %zu\n\n", sizeof(greeting1) - 1);  // -1 for null terminator

    // Method 2: Initialize character by character (must add null terminator manually)
    char greeting2[6];
    greeting2[0] = 'W';
    greeting2[1] = 'o';
    greeting2[2] = 'r';
    greeting2[3] = 'l';
    greeting2[4] = 'd';
    greeting2[5] = '\0';  // Null terminator essential!
    printf("greeting2: %s\n", greeting2);
    printf("Length: %zu\n\n", sizeof(greeting2) - 1);

    // Method 3: Array initialization with explicit null
    char name[] = {'J', 'o', 'h', 'n', '\0'};
    printf("name: %s\n", name);

    // Modify string content
    name[0] = 'R';
    name[1] = 'o';
    name[2] = 'n';
    printf("Modified name: %s\n\n", name);

    // String input from user
    char city[20];
    printf("Enter your city: ");
    // scanf with "%19s" reads up to 19 characters and adds the null terminator automatically
    scanf("%19s", city);  // Limit input to prevent overflow
    printf("You live in: %s\n", city);

    // Demonstrate null terminator importance
    char broken[5] = {'H', 'e', 'l', 'l', 'o'};  // Missing null terminator!
    printf("\nBroken string (may show garbage): %s\n", broken);  // Undefined behavior

    return 0;
}