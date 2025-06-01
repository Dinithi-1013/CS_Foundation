#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    // Initialize variables for user guess and attempt counter
    
    printf("Welcome to Guess the Number!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    // Implement a do-while loop to:
    // 1. Prompt user for a guess
    // 2. Increment attempt counter
    // 3. Provide feedback: "Too high!", "Too low!", or "Congratulations!" with attempt count
    // 4. Continue until the correct number is guessed

    return 0;
}