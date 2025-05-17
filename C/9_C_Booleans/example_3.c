#include <stdio.h>
int main() {
    int x = 5, y = 10;
    int both = x > 0 && y < 15;
    printf("Both true: %d\n", both);
    return 0;
}


// Remark:notice that the code is read from right to left always when the compiler reads the code