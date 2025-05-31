#include <stdio.h>

int main() {
    int outer_limit, inner_limit;

    // Ask user for limits of outer and inner loops
    printf("Enter the limit for the outer loop: ");
    scanf("%d", &outer_limit);

    printf("Enter the limit for the inner loop: ");
    scanf("%d", &inner_limit);

    // Outer loop
    for (int i = 1; i <= outer_limit; i++) {
        printf("Entering outer loop iteration %d\n", i);

        // Inner loop
        for (int j = 1; j <= inner_limit; j++) {
            printf("  Inner loop: i = %d, j = %d\n", i, j);
        }

        printf("Exiting outer loop iteration %d\n", i);
        printf("-----------------------------\n");
    }

    return 0;
}