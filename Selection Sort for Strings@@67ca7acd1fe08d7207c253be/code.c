// Your code here...
void selectionSort(char arr[], int n) {
   

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {  // Lexicographically smallest character find karna
                min = j;
            }
        }
        // Swap smallest character with current character
        char temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Print Function
void printString(char arr[],int n) {
    printf("%s\n", arr);  // String ko directly print kar sakte hain
}