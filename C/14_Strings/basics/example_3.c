#include <stdio.h>

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] && str2[i]) {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    return str1[i] == str2[i];
}

int main() {
    char s1[50], s2[50];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);

    if(stringCompare(s1, s2))
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
