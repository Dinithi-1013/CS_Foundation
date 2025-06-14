#include <stdio.h>

void stringConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while(dest[i]) i++;
    while(src[j]) dest[i++] = src[j++];
    dest[i] = '\0';
}

int main() {
    char first[50], last[50];

    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);

    stringConcat(first, " ");
    stringConcat(first, last);

    printf("Full name: %s\n", first);
    return 0;
}
