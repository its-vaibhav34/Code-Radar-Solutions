#include <stdio.h>

int main() {
    char chr;
    scanf("%c", &chr);

    // Correct vowel check
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
        chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
        printf("Vowel");
    }
    // Check for consonants
    else if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')) {
        printf("Consonant");
    }
    // Any other character is a special character
    else {
        printf("Special Character");
    }

    return 0;
}
