#include <stdio.h>
int main() {
    int a = 10, b = 3;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    return 0;
}


//Explain what these operators do and where to use
//Explain what these operators do and where to use

// Basic operators in C:
// 1. Arithmetic Operators: +, -, *, /, %
//    - Used for mathematical calculations.
//    - Example: int sum = a + b; // Adds a and b
//
// 2. Assignment Operators: =, +=, -=, *=, /=, %=
//    - Used to assign values to variables.
//    - Example: x += 5; // Equivalent to x = x + 5;
//
// 3. Comparison Operators: ==, !=, >, <, >=, <=
//    - Used to compare two values (often in if statements).
//    - Example: if (a == b) { /* ... */ }
//
// 4. Logical Operators: &&, ||, !
//    - Used to combine or invert boolean expressions.
//    - Example: if (a > 0 && b > 0) { /* ... */ }
//
// 5. Increment/Decrement Operators: ++, --
//    - Increase or decrease a variable by 1.
//    - Example: i++; // Same as i = i + 1;
//
// Use these operators in calculations, conditions, and loops as needed.