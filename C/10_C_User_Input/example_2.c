#include <stdio.h>

// Program to demonstrate the use of scanf to take user input
int main()
{
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name); // Reads a string (up to 49 characters)

    printf("Enter your age: ");
    scanf("%d", &age); // Reads an integer

    printf("Hello, %s! You are %d years old.\n", name, age);
    for(int i = 0; name[i] != '\0' ; i++){
        printf("%c",name[i+1]);
    }
    printf("\n");
    return 0;
}

/**
 * Reads formatted input from the standard input stream (stdin).
 *
 * @param format A C string that specifies the format of the input.
 * @param ... Pointers to variables where the read values will be stored.
 * @return The number of input items successfully matched and assigned, or EOF if an input failure occurs.
 *
 * Example usage:
 *   int x;
 *   scanf("%d", &x);
 */