#include <stdio.h>
int main() {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("unsigned short: %zu bytes\n", sizeof(unsigned short));
    printf("unsigned long: %zu bytes\n", sizeof(unsigned long));
    printf("unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    return 0;
}
//print the size of a data type