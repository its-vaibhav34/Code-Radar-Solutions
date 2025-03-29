// Your code here...
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            // Compare strings lexicographically using strcmp
            if (strcmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }
        // Swap strings
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min]);
        strcpy(arr[min], temp);
    }
}

// Print Function
void printString(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);  // Print each string on a new line
    }
}