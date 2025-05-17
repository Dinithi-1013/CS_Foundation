#include <stdio.h>

// Function Declarations (Headers)

// Arithmetic
void additionExample();
void subtractionExample();
void multiplicationExample();
void divisionExample();
void modulusExample();
void incrementExample();
void decrementExample();

// Assignment
void simpleAssignmentExample();
void addAssignExample();
void subtractAssignExample();
void multiplyAssignExample();
void divideAssignExample();
void modulusAssignExample();
void leftShiftAssignExample();
void rightShiftAssignExample();
void andAssignExample();
void xorAssignExample();
void orAssignExample();

// Comparison
void equalComparisonExample();
void notEqualExample();
void greaterThanExample();
void lessThanExample();
void greaterEqualExample();
void lessEqualExample();

// Logical
void logicalAndExample();
void logicalOrExample();
void logicalNotExample();

// // Bitwise
// void bitwiseAndExample();
// void bitwiseOrExample();
// void bitwiseXorExample();
// void bitwiseNotExample();
// void leftShiftExample();
// void rightShiftExample();

int main() {
    // Arithmetic Operators
    additionExample();
    subtractionExample();
    multiplicationExample();
    divisionExample();
    modulusExample();
    incrementExample();
    decrementExample();

    // Assignment Operators
    simpleAssignmentExample();
    addAssignExample();
    subtractAssignExample();
    multiplyAssignExample();
    divideAssignExample();
    modulusAssignExample();
    leftShiftAssignExample();
    rightShiftAssignExample();
    andAssignExample();
    xorAssignExample();
    orAssignExample();

    // Comparison Operators
    equalComparisonExample();
    notEqualExample();
    greaterThanExample();
    lessThanExample();
    greaterEqualExample();
    lessEqualExample();

    // Logical Operators
    logicalAndExample();
    logicalOrExample();
    logicalNotExample();

    // // Bitwise Operators
    // bitwiseAndExample();
    // bitwiseOrExample();
    // bitwiseXorExample();
    // bitwiseNotExample();
    // leftShiftExample();
    // rightShiftExample();

    return 0;
}

// Arithmetic Operator Functions

// + Addition: Adds two operands. Example: a + b
void additionExample() {
    int a = 5, b = 3;
    printf("5 + 3 = %d\n", a + b);
}

// - Subtraction: Subtracts right operand from left. Example: a - b
void subtractionExample() {
    int a = 5, b = 3;
    printf("5 - 3 = %d\n", a - b);
}

// * Multiplication: Multiplies two operands. Example: a * b
void multiplicationExample() {
    int a = 5, b = 3;
    printf("5 * 3 = %d\n", a * b);
}

// / Division: Divides left operand by right. Example: a / b
void divisionExample() {
    int a = 10, b = 2;
    printf("10 / 2 = %d\n", a / b);
}

// % Modulus: Returns remainder of division. Example: a % b
void modulusExample() {
    int a = 10, b = 3;
    printf("10 %% 3 = %d\n", a % b);
}

// ++ Increment: Increases integer value by one. Example: a++
void incrementExample() {
    int a = 7;
    printf("a before a++: %d\n", a);
    a++;
    printf("a after a++: %d\n", a);
}

// -- Decrement: Decreases integer value by one. Example: --a
void decrementExample() {
    int a = 7;
    printf("a before --a: %d\n", a);
    --a;
    printf("a after --a: %d\n", a);
}

// Assignment Operator Functions

// = Simple assignment: Assigns right value to left variable. Example: a = b
void simpleAssignmentExample() {
    int a;
    a = 4;
    printf("a = 4 -> a is %d\n", a);
}

// += Add and assign: a += b is same as a = a + b
void addAssignExample() {
    int a = 4;
    a += 6;
    printf("a += 6 -> a is %d\n", a);
}

// -= Subtract and assign: a -= b is same as a = a - b
void subtractAssignExample() {
    int a = 10;
    a -= 3;
    printf("a -= 3 -> a is %d\n", a);
}

// *= Multiply and assign: a *= b is same as a = a * b
void multiplyAssignExample() {
    int a = 5;
    a *= 3;
    printf("a *= 3 -> a is %d\n", a);
}

// /= Divide and assign: a /= b is same as a = a / b
void divideAssignExample() {
    int a = 20;
    a /= 4;
    printf("a /= 4 -> a is %d\n", a);
}

// %= Modulus and assign: a %= b is same as a = a % b
void modulusAssignExample() {
    int a = 20;
    a %= 7;
    printf("a %%= 7 -> a is %d\n", a);
}

// <<= Left shift and assign: Shifts bits of a left by 2. Example: a <<= 2
void leftShiftAssignExample() {
    int a = 1;
    a <<= 2;
    printf("a <<= 2 -> a is %d\n", a);
}

// >>= Right shift and assign: Shifts bits of a right by 1. Example: a >>= 1
void rightShiftAssignExample() {
    int a = 8;
    a >>= 1;
    printf("a >>= 1 -> a is %d\n", a);
}

// &= Bitwise AND and assign: a &= b is same as a = a & b
void andAssignExample() {
    int a = 6; // 110
    a &= 3;    // 011
    printf("6 &= 3 -> a is %d\n", a);
}

// ^= Bitwise XOR and assign: a ^= b is same as a = a ^ b
void xorAssignExample() {
    int a = 6; // 110
    a ^= 3;    // 011
    printf("6 ^= 3 -> a is %d\n", a);
}

// |= Bitwise OR and assign: a |= b is same as a = a | b
void orAssignExample() {
    int a = 6; // 110
    a |= 1;    // 001
    printf("6 |= 1 -> a is %d\n", a);
}

// Comparison Operator Functions

// == Equal to: Returns true if operands are equal
void equalComparisonExample() {
    int a = 5, b = 5;
    printf("5 == 5 -> %s\n", (a == b) ? "true" : "false");
}

// != Not equal to: Returns true if operands are not equal
void notEqualExample() {
    int a = 5, b = 3;
    printf("5 != 3 -> %s\n", (a != b) ? "true" : "false");
}

// > Greater than: Returns true if left is greater than right
void greaterThanExample() {
    printf("5 > 3 -> %s\n", (5 > 3) ? "true" : "false");
}

// < Less than: Returns true if left is less than right
void lessThanExample() {
    printf("3 < 5 -> %s\n", (3 < 5) ? "true" : "false");
}

// >= Greater than or equal to: Returns true if left >= right
void greaterEqualExample() {
    printf("5 >= 5 -> %s\n", (5 >= 5) ? "true" : "false");
}

// <= Less than or equal to: Returns true if left <= right
void lessEqualExample() {
    printf("3 <= 5 -> %s\n", (3 <= 5) ? "true" : "false");
}

// Logical Operator Functions

// && Logical AND: True if both conditions are true
void logicalAndExample() {
    int a = 1, b = 0;
    printf("1 && 0 -> %s\n", (a && b) ? "true" : "false");
}

// || Logical OR: True if at least one condition is true
void logicalOrExample() {
    int a = 1, b = 0;
    printf("1 || 0 -> %s\n", (a || b) ? "true" : "false");
}

// ! Logical NOT: Reverses the condition
void logicalNotExample() {
    int a = 0;
    printf("!0 -> %s\n", (!a) ? "true" : "false");
}

// // Bitwise Operator Functions

// // & Bitwise AND: Each bit ANDed. Example: 6 & 3
// void bitwiseAndExample() {
//     printf("6 & 3 = %d\n", 6 & 3);
// }

// // | Bitwise OR: Each bit ORed. Example: 6 | 3
// void bitwiseOrExample() {
//     printf("6 | 3 = %d\n", 6 | 3);
// }

// // ^ Bitwise XOR: Each bit XORed. Example: 6 ^ 3
// void bitwiseXorExample() {
//     printf("6 ^ 3 = %d\n", 6 ^ 3);
// }

// // ~ Bitwise NOT: One's complement. Example: ~6
// void bitwiseNotExample() {
//     printf("~6 = %d\n", ~6);
// }

// // << Left shift: Shifts bits to left. Example: 2 << 1
// void leftShiftExample() {
//     printf("2 << 1 = %d\n", 2 << 1);
// }

// // >> Right shift: Shifts bits to right. Example: 8 >> 1
// void rightShiftExample() {
//     printf("8 >> 1 = %d\n", 8 >> 1);
// }
