// Your code here...
int isPrime(int num) {
    if (num < 2) return 0;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  
    }
    return 1;  
}


void printPrimesInRange(int L, int R) {
    int primeFound = 0; 
    
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            primeFound = 1; 
        }
    }
    
    if (!primeFound) {
        printf("No prime numbers");
    }
}