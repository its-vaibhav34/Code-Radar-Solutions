#include <stdio.h>

int main() {
    char chr;
    scanf("%c", &chr);

    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u') {
        printf("Vowel");
    }
    
    else if (chr >= 'a' && chr <= 'z') {
        printf("Consonant");
    }
    else if (chr >= '0' && chr <= '9') {
        printf("Digit");
    }
    
    else {
        printf("Special Character");
    }

    return 0;
}

