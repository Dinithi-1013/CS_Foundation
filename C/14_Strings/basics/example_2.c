#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while(str[len] != '\0') len++;
    return len;
}

int main() {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Length = %d\n", stringLength(word));
    return 0;
}
