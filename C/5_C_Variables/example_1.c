#include <stdio.h>

int main() 
{
    int x = 15;
    printf("x: %d\n", x);
    return 0;
}

// Notes:
// - To declare an integer variable in C, use the `int` keyword followed by the variable name.
//   Example: `int x = 15;` declares an integer variable `x` and initializes it with the value 15.
// - To print the value of an integer variable, use the `printf` function with the `%d` format specifier.
//   Example: `printf("x: %d\n", x);` prints the value of `x` followed by a newline.
// - `%d` is a format specifier used in `printf` to represent an integer value.
// - The format for using `%d` in `printf` is: `"text %d text", variable`.
//   Replace `variable` with the name of the integer variable you want to print.
// - Placeholders like `%d` are used to represent different data types in `printf`.
//   For now, understand that `%d` is specifically for integers. Other placeholders for different data types will be explained later.