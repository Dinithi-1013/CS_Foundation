#include <stdio.h>
int main() {
    int small = 50;
    long big = 50000;
    printf("small: %d, big: %ld\n", small, big);
    return 0;
}
//explain the difference between int and long

/*
The difference between `int` and `long` lies in their size and range, which can vary depending on the system and compiler.

1. **`int`**:
    - Typically 4 bytes on most modern systems.
    - Can store values in the range of `-2,147,483,648` to `2,147,483,647` (on a 4-byte system).
    - Placeholder in `printf`: `%d` or `%i`.

2. **`long`**:
    - Typically 4 bytes or 8 bytes, depending on the system (e.g., 4 bytes on 32-bit systems, 8 bytes on 64-bit systems).
    - Can store larger values than `int` (e.g., `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` on 8-byte systems).
    - Placeholder in `printf`: `%ld`.

Always check your system's specific implementation using `sizeof(int)` and `sizeof(long)` to confirm their sizes.
*/