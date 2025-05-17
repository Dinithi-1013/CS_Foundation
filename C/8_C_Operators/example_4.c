#include <stdio.h>

int main() {
    int x = 5;
    // The += operator is the addition and assignment operator.
    // It adds the value on the right (2) to the variable on the left (x),
    // and then assigns the result back to x.
    // This is equivalent to: x = x + 2;
    x += 2; // x = x + 2
    printf("x: %d\n", x);
    return 0;
}

