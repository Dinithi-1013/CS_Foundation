#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    printf("\033[1;34mint:\033[0m %zu bytes, format specifier: \033[1;32m%%d\033[0m, range: \033[1;33m%d to %d\033[0m\n", sizeof(int), INT_MIN, INT_MAX);
    printf("\033[1;34mfloat:\033[0m %zu bytes, format specifier: \033[1;32m%%f\033[0m, range: \033[1;33m%.10e to %.10e\033[0m\n", sizeof(float), -FLT_MAX, FLT_MAX);
    printf("\033[1;34mdouble:\033[0m %zu bytes, format specifier: \033[1;32m%%lf\033[0m, range: \033[1;33m%.10e to %.10e\033[0m\n", sizeof(double), -DBL_MAX, DBL_MAX);
    printf("\033[1;34mchar:\033[0m %zu bytes, format specifier: \033[1;32m%%c\033[0m, range: \033[1;33m%d to %d\033[0m\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("\033[1;34mshort:\033[0m %zu bytes, format specifier: \033[1;32m%%hd\033[0m, range: \033[1;33m%d to %d\033[0m\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("\033[1;34mlong:\033[0m %zu bytes, format specifier: \033[1;32m%%ld\033[0m, range: \033[1;33m%ld to %ld\033[0m\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("\033[1;34mlong long:\033[0m %zu bytes, format specifier: \033[1;32m%%lld\033[0m, range: \033[1;33m%lld to %lld\033[0m\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("\033[1;34munsigned int:\033[0m %zu bytes, format specifier: \033[1;32m%%u\033[0m, range: \033[1;33m0 to %u\033[0m\n", sizeof(unsigned int), UINT_MAX);
    printf("\033[1;34munsigned char:\033[0m %zu bytes, format specifier: \033[1;32m%%c\033[0m, range: \033[1;33m0 to %u\033[0m\n", sizeof(unsigned char), UCHAR_MAX);
    printf("\033[1;34munsigned short:\033[0m %zu bytes, format specifier: \033[1;32m%%hu\033[0m, range: \033[1;33m0 to %u\033[0m\n", sizeof(unsigned short), USHRT_MAX);
    printf("\033[1;34munsigned long:\033[0m %zu bytes, format specifier: \033[1;32m%%lu\033[0m, range: \033[1;33m0 to %lu\033[0m\n", sizeof(unsigned long), ULONG_MAX);
    printf("\033[1;34munsigned long long:\033[0m %zu bytes, format specifier: \033[1;32m%%llu\033[0m, range: \033[1;33m0 to %llu\033[0m\n", sizeof(unsigned long long), ULLONG_MAX);
    return 0;
}
//print the size of a data type