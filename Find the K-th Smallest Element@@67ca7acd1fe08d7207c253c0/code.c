void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        } 
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
    if (k <= 0 || k > n) {  // Agar K range ke bahar hai, to -1 return karo
        return -1;  
    }
    selectionSort(arr, n);  // Sort the array
    return arr[k - 1];   // Return the k-th smallest element (1-based index)
}