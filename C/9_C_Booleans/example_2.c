#include <stdio.h>
int main() {
    int age = 20;
    int adult = age >= 18;
    if (adult) printf("Adult\n");
    printf("%d\n",adult);
    return 0;
}