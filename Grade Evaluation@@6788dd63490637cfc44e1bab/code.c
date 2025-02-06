#include <stdio.h>

int main() {
     char c;
     scanf("%c".&c);
     if(c=='A'){
        printf("Excellent");
     }
     else if(c=='B'){
        printf("Good");
     }
     else if(c=='B'){
        printf("Average");
     }
     else if(c=='B'){
        printf("Below Average");
     }
     else if(c=='B'){
        printf("Fail");
     }
  else{
    printf("Invalid grade");
  }
    return 0;
}