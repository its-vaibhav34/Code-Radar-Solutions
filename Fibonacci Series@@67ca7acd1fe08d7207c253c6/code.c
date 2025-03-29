void fibonacciSeries(int n){
    int a = 0, b = 1, next;

    if (n <= 0) {
        printf("Invalid input\n");
        return;
    }

    
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    
}