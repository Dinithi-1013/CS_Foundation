#include <stdio.h>
int main() {
    float f = 2.5;
    double d = 3.14159;
    printf("f: %f, d: %.5lf\n", f, d);
    return 0;
}
//explain the difference between float and double
/**
 * Differences between `float` and `double`:
 *
 * 1. Precision:
 *    - `float` is a single-precision floating-point type, typically using 32 bits.
 *    - `double` is a double-precision floating-point type, typically using 64 bits.
 *    - `double` provides higher precision and can represent more significant digits than `float`.
 *
 * 2. Memory Usage:
 *    - `float` consumes less memory (4 bytes on most systems).
 *    - `double` consumes more memory (8 bytes on most systems).
 *
 * 3. Range:
 *    - `float` has a smaller range of representable values.
 *    - `double` has a larger range of representable values, making it suitable for calculations requiring high precision.
 *
 * 4. Performance:
 *    - `float` may be faster on some systems due to its smaller size.
 *    - `double` may be slower but provides more accurate results.
 *
 * 5. Use Cases:
 *    - Use `float` when memory is constrained, and precision is not critical (e.g., graphics, games).
 *    - Use `double` when precision is essential (e.g., scientific calculations, financial applications).
 *
 * Placeholders:
 *    - `%f` is used in `printf` for `float`.
 *    - `%.5lf` or `%lf` is used in `printf` for `double`.
 */