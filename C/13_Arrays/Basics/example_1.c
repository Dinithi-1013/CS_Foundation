#include <stdio.h>

int main() {
    int score[10];
    // Input 10 numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &score[i]);
    }

    // Display the array
    printf("The scores are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}
