#include <stdio.h>

int main() {
    int a, b;
    char c;
    
   
    
    int r; // result variable
    switch (c) {
        case '+':
            r = a + b;
            printf("%d\n", r);
            break;
        case '-':
            r = a - b;
            printf("%d\n", r);
            break;
        case '*':
            r = a * b;
            printf("%d\n", r);
            break;
        case '/':
            if (b != 0) {
                r = a / b;
                printf("%d\n", r);
            } else {
                printf("error\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator\n");
     return 1;
    }
    
 return 0;
}