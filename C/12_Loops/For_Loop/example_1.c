#include <stdio.h> //This is the header as usual

int main() {
    int i = 1;
    // for (; condition ;) form: initialization and increment/decrement are optional
    for (; i <= 5; ) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
