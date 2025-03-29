// Your code here...
int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // Prime number
}

// Function to print prime numbers in range [L, R]
void printPrimesInRange(int L, int R) {
    for (int i = L; i <= R; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}