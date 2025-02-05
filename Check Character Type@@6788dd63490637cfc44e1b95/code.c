#include <stdio.h>

int main() {
    char chr;
    scanf("%c", &chr);

    // Check if it's a vowel (both uppercase and lowercase)
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
        chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
        printf("Vowel");
    }
    // Check if it's a consonant (a-z, A-Z but not vowels)
    else if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')) {
        printf("Consonant");
    }
    // Check if it's a digit (0-9)
    else if (chr >= '0' && chr <= '9') {
        printf("Digit");
    }
    // If it's neither, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}

