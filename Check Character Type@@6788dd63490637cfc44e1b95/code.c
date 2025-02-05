#include <stdio.h>

int main() {
    char chr;
    scanf("%c",&chr);
    if(chr== "a" ||"e"||"i"||"o"||"u"){
        printf("Vowel");
    }
    else if(chr!= "a" ||"e"||"i"||"o"||"u"){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
   
    return 0;
}