// Your code here...
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if (a & 80000000) {  // Check if the MSB is set
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
