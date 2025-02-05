#include <stdio.h>

int main() {
    char ch;
    
    // Read a single character from input
    if (scanf(" %c", &ch) != 1) {
        printf("Not an alphabet\n");
        return 0;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}