#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    if (scanf("%d %d %c", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }
    
    int r; 
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