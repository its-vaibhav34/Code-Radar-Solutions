#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);  // Read a single character

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}