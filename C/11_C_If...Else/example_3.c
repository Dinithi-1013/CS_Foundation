#include <stdio.h>

// Program to evaluate score and print grade

int main() {
    int mark;

    // Ask user to enter their score
    printf("Enter your score (0-100): ");
    scanf("%d", &mark);

    // Check if the entered score is valid
    if (mark < 0 || mark > 100) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    } else {
        // Evaluate and print grade based on score
        if (mark >= 80) {
            printf("Your grade is: A\n");
        } else if (mark >= 60) {
            printf("Your grade is: B\n");
        } else {
            printf("Your grade is: C\n");
        }
    }

    return 0;
}